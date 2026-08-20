// Packet_Loading_Time_Report_Statistics 布局 TU 检查。
//
// 保持 C++98 兼容：使用 typedef 数组表达编译期断言，不使用
// static_assert，也不通过 offsetof 检查成员（布局字段可能属于 private）。

#include "Packet_Loading_Time_Report_Statistics.h"

typedef char
    loading_time_report_statistics_size_must_be_0x806
    [(sizeof(Packet_Loading_Time_Report_Statistics) == 0x806) ? 1 : -1];

typedef char
    loading_time_report_statistics_pw_item_size_must_be_9
    [(sizeof(Packet_Loading_Time_Report_Statistics::PwItem) == 9) ? 1 : -1];

typedef char
    loading_time_report_statistics_lag_item_size_must_be_0xb
    [(sizeof(Packet_Loading_Time_Report_Statistics::LagItem) == 0xb) ? 1 : -1];

int main()
{
    Packet_Loading_Time_Report_Statistics report;
    return (sizeof(report) == 0x806) ? 0 : 1;
}
