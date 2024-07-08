#include <iostream>
using namespace std;

class MasukUniversitas {
public:
    string biayaKuliah;
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;
    int nilai;

public:
    MasukUniversitas() {
    
        uangPendaftaran = 0;
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalBiaya = 0;
        nilai = 0;
        
    }

    virtual void namaJalurMasuk() {return;}
    virtual void hitungTotalBiaya() {return;}
    virtual void tampilkanTotalBiaya() {return;}
    virtual void input() {return;}



    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }
    float getUangPendaftaran() {
        return uangPendaftaran;
    }
    void setUangSemesterPertama(int nilai){
        this->uangSemesterPertama = nilai;
    }
    float getUangSemesterPertama(){
        return uangSemesterPertama;
    }
    void setUangBangunan(int nilai){
        this->uangBangunan = nilai;
    }
    float getUangBangunan(){
        return uangBangunan;
    }
    void setTotalBiaya(int nilai){
        this->totalBiaya = nilai;
    }
    float getTotalBiaya(){
        return totalBiaya;
    }
        
};

class SNBT : public MasukUniversitas {
 public:
    string biayaKuliah;

    SNBT(int uangPendaftaran, int uangSemesterPertama, int uangBangunan)
        cout << "Total Biaya\n" << endl;

      
};

class SNBP : public MasukUniversitas {
public:
    SNBP
};

int main() {
    MasukUniversitas biayaKuliah;
    cout << "Total Biaya";
    
}