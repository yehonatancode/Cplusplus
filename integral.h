template<typename Function>
double integral(Function f, double xval) {
double sum=0;
for (double x=0; x<=xval; x+=0.001) {
double y = f(x);
sum += y*0.001;
}
return sum;
}