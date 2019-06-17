#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator{
public:
static double CM_TO_M(double CM){ return CM*0.01;}
static double M_TO_CM(double M){ return 100*M;}
static double M_TO_KM(double M){return M*0.001;}
static double KM_TO_M(double KM){return 1000*KM;}
static double KM_TO_CM(double KM){return M_TO_CM(KM_TO_M(KM));}
static double CM_TO_KM(double CM) return M_TO_KM(CM_TO_M(CM));}

static double G_TO_KG(double G){return 0.001*G);}
static double KG_TO_G(double KG){ return KG*1000;}
static double KG_TO_TON(double KG) {return 0.001/KG;}
static double TON_TO_KG(double TON){return TON*1000;}
static double TON_TO_G(double TON){return KG_TO_G(TON_TO_KG(TON));}
static double G_TO_TON(double G) return KG_TO_TON(G_TO_KG(G));}

static double SEC_TO_MIN(double SEC){ return SEC/60;}
static double MIN_TO_SEC(double MIN){return MIN*60;}
static double MIN_TO_HOUR(double MIN) return MIN/60;}
static double HOUR_TO_MIN(double HOUR){return 60*HOUR;}
static double HOUR_TO_SEC(double HOUR){return MIN_TO_SEC(HOUR_TO_MIN(HOUR));}
static double SEC_TO_HOUR(double SEC){return MIN_TO_HOUR(SEC_TO_MIN(SEC));}
};
#endif