
//                          Allocated                       Range expected              Bits required
struct Date1
{
    int Day;            // 4 byte           32              0 - 31                              5
    int Month;         // 4 byte           32              0 - 12                              4
    int Year;            // 4 byte           32              0 - 2040                          15
};                        // 12 byte          96
// sizeof(Date1)  12


#pragma pack(1)
struct Date2
{
    int Day: 5;
    int Month : 4;
    int Year : 15;
};
// sizeof(Date2)    3

struct Demo
{
    int no : -3;            // Error
    int i : 35;                 // Error
    float f : 3;                // Error
    double d : 5;           // Error
}obj;

&obj;           // Allowed
&(obj.i)           // Not allowed

