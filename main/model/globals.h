#ifndef _GLOBALS
#define _GLOBALS

// 2D array of Patches

// All GUI variables

// convert ft to m from the SMS to .png scaling conversion
int patch_length = 30;
int max_area = 30*30;

// max gwr/unit biomass; e- excretion->DOC; r- respiration; s- senecence(natural mortality); -egestion ->POC
double max_waterdecomp = 6.26/24;
double max_seddecomp = 6.26/24;
double max_herbivore = 1/24;
double herbivore_egestion = 0.2;
double max_sedconsumer = 0.55/24;
double sedconsumer_egestion_seddecomp = 0.35;
double max_consum = 0.125/24;
double e_waterdecomp = 0.173/24;
double e_seddecomp = 0.173/24;
double e_herbivore = 0.4/24;
double e_sedconsumer = 0.01/24;
double sedconsumer_egestion_detritus = 0.9;
double e_consum = 0.0032/24;
double r_waterdecomp = 0.6/24;
double r_seddecomp = 0.6/24;
double r_herbivore = 0.08/24;
double r_sedconsumer = 0.04/24;
double r_consum = 0.0125/24;
double s_waterdecomp = 0.05/24;
double s_seddecomp = 0.05/24;
double s_herbivore = 0.01/24;
double s_sedconsumer = 0.01/24;
double s_consum = 0.002/24;
double consum_egestion = 0.2;

// below variables are ripe for sensitivity analysis
// prey parameters - Ai and Gi, coded 1 -> 0
int Ai_waterdecomp_DOC = 30;
int Ai_waterdecomp_POC = 30;
int Ai_Peri_DOC = 30;
int Ai_Peri_POC = 30;
double Ai_seddecomp_detritus = 0.6;
double Ai_herbivore_phyto = 20;
int Ai_herbivore_waterdecomp = 3;
int Ai_herbivore_peri = 3;
int Ai_sedconsumer_seddecomp = 3;
int Ai_sedconsumer_peri = 2;
double Ai_sedconsumer_detritus = 3.5;
double Ai_consum_herbivore = 3.5;
int Ai_consum_sedconsumer = 4;
double Gi_waterdecomp_DOC = 0.05;
double Gi_waterdecomp_POC = 0.05;
double Gi_Peri_DOC = 0.05;
double Gi_Peri_POC = 0.05;
double Gi_seddecomp_detritus = 0.005;
double Gi_herbivore_phyto = 0.01;
double Gi_herbivore_waterdecomp = 0.01;
double Gi_herbivore_peri = 0.01;
double Gi_sedconsumer_seddecomp = 0.02;
double Gi_sedconsumer_peri = 0.02;
double Gi_sedconsumer_detritus = 0.02;
double Gi_consum_herbivore = 0.025;
double Gi_consum_sedconsumer = 0.04;
double pref_waterdecomp_DOC = 0.5;
double pref_waterdecomp_POC = 0.5;
double pref_Peri_DOC = 0.5;
double pref_Peri_POC = 0.5;
int pref_seddecomp_detritus = 1;
double pref_herbivore_phyto = 0.7;
double pref_herbivore_waterdecomp = 0.15;
double pref_herbivore_peri = 0.15;
double pref_sedconsumer_seddecomp = 0.5;
double pref_sedconsumer_peri = 0.4;
double pref_sedconsumer_detritus = 0.1;
double pref_consum_herbivore = 0.7;
double pref_consum_sedconsumer = 0.3;

// peri updated every timestep based on macro density  
// density dependent crowding effects on linear scale - capped at Aj and Gj - coded 1->0  
int Aj_phyto = 10;
double Aj_waterdecomp = 1.2;
double Aj_seddecomp = 0.2;
double Aj_herbivore = 2.4;
int Aj_sedconsumer = 2;
double Aj_consum = 0.65;
int Gj_phyto = 100;
int Gj_waterdecomp = 20;
int Gj_seddecomp = 120;
int Gj_herbivore = 108;
int Gj_sedconsumer = 20;
double Gj_consum = 6.5;

// set k-macro .4 -> taken from interface
// set k-phyto .4 -> taken from interface
double k_herbivore = 0.2;
double k_POC = 0.2;

double theta = 1.072;

#endif
