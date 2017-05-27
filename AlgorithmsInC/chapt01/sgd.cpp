//
// Created by chen on 17-5-8.
//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define M 5
#define N 4
#define K 2
#define inf 0.00001

const float lamdap = 0.08;
const float lamdaq = 0.3;
float alpha = 0.0002;
const float beta = 0.02;

void sgd(float r[][N], float p[][K], float q[][K]){
    int step = 1;
    for(step;step < 5000;step++){
        float error_all = 0;
        for (int i = 0; i < M; i++){
            for (int j = 0; j < N; j++){
                if (r[i][j] != 0){
                    float *p_t = p[i];
                    float t_error = 0.0;
                    for (int t = 0; t < K; t++){
                        t_error += p[i][t] * q[j][t];
                    }
                    float error = 0.0;
                    error = r[i][j] - t_error;
                    for (int t = 0; t < K; t++){
                        p[i][t] = p[i][t] + alpha*(error*q[j][t]- lamdap  * p[i][t]);
                        q[j][t] = q[j][t] + alpha*(error*p_t[t] - lamdaq  * q[j][t]);
                    }
                }
            }
        }
        for (int i = 0; i < M; i++){
            for (int j = 0; j < N; j++){
                if (r[i*N + j] != 0){
                    float t_error = 0.0;
                    float t_p = 0.0;
                    float t_q = 0.0;
                    for (int t = 0; t < K; t++){
                        t_p +=  pow(p[i][t], 2);
                        t_q +=  pow(q[j][t], 2);
                        t_error += p[i][t] * q[j][t];
                    }
                    error_all += pow((r[i][j] - t_error), 2) + lamdap*t_p + lamdaq*t_q;
                    //error_all += pow((r[i*N + j] - t_error), 2);
                }
            }
        }
//        printf("error_all:%f\n", error_all);
//        alpha = lamdap / (1 + lamdap * pow(step, 1.5));
        //printf("alpha:%f\n", alpha);
        step++;
        if(error_all < 0.001){
            break;
        }
    }


}

int main()
{
    float r[M][N] = { { 5, 3, 0, 1 }, { 4, 0, 0, 1 }, { 1, 1, 0, 5 }, { 1, 0, 0, 4 }, { 0, 1, 5, 4 } };
    float p[M][K] ;
    float q[N][K] ;
    printf("===================================\n");
    printf("R:\n");
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            //r[i][j] = 1;
            printf("%f\t", r[i][j]);
        }
        printf("\n");
    }

    printf("===================================\n");
    printf("P:\n");
    for (int i = 0; i < M; i++){
        for (int j = 0; j < K; j++){
            p[i][j] = rand()/(double)(RAND_MAX);
            printf("%f\t", p[i][j]);
        }
        printf("\n");
    }

    printf("===================================\n");
    printf("Q:\n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < K; j++){
            q[i][j] = rand()/(double)(RAND_MAX);
            printf("%f\t", q[i][j]);
        }
        printf("\n");
    }

    printf("===================================\n");
    sgd(r, p, q);
    float error_all = 1;
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            if (r[i][j] != 0){
                float t_error = 0.0;
                float t_p = 0.0;
                float t_q = 0.0;
                for (int t = 0; t < K; t++){
                    t_p +=  pow(p[i][t], 2);
                    t_q +=  pow(q[j][t], 2);
                    t_error += p[i][t] * q[j][t];
                }
                error_all += pow((r[i][j] - t_error), 2) + lamdap*t_p + lamdaq*t_q;
            }
        }
    }
    printf("===================================\n");
    printf("print the error:");
    printf("error_all:%f\n", error_all);
    float r_t[M][N] = { 0.2 };
    printf("===================================\n");
    printf("print the sgd matrix:\n");
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
                float t_error = 0.0;
                for (int t = 0; t < K; t++){
                    t_error += p[i][t] * q[j][t];
                }
                r_t[i][j] = t_error;
            printf("%f\t", r_t[i][j]);
        }
        printf("\n");
    }



    return 0;
}
