#include <stdio.h>

int main() {
    // تعريف الثوابت الفيزيائية بناءً على قانون العبور الصفر
    double mass = 0.0;          // الكتلة عند نقطة الصفر (المنفردة)
    double c = 299792458;      // سرعة الضوء
    double T = 1.0;            // ثابت الراجح (صمام أمان المعلومات)
    double energy;

    printf("--- Rajeh Zero-Crossing Engine Start ---\n");

    // تطبيق قانون العبور: حساب الطاقة عند تلاشي الكتلة
    // E = (m * c^2) + T
    energy = (mass * (c * c)) + T;

    printf("Input Mass: %.1f\n", mass);
    printf("Rajeh Constant (T): %.1f\n", T);
    
    // التحقق من حالة العبور
    if (energy == T && mass == 0.0) {
        printf("Status: [ SUCCESSFUL CROSSING ]\n");
        printf("Result: Energy preserved at gateway. System Stable.\n");
    } else {
        printf("Status: [ SYSTEM COLLAPSE ]\n");
    }

    return 0;
}
