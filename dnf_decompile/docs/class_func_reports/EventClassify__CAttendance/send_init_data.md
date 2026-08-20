# send_init_data

`_ZN13EventClassify11CAttendance14send_init_dataEP5CUserR11PacketGuardshb`

`EventClassify::CAttendance::send_init_data(CUser*, PacketGuard&, short, unsigned char, bool)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAttendance` | `0x0810e804` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e804  _ZN13EventClassify11CAttendance14send_init_dataEP5CUserR11PacketGuardshb
#           EventClassify::CAttendance::send_init_data(CUser*, PacketGuard&, short, unsigned char, bool)
# range [0x0810e804, 0x0810e877]
0810e804 +0x00:  push   %ebp
0810e805 +0x01:  mov    %esp,%ebp
0810e807 +0x03:  push   %ebx
0810e808 +0x04:  sub    $0x24,%esp
0810e80b +0x07:  mov    0x14(%ebp),%ecx
0810e80e +0x0a:  mov    0x18(%ebp),%edx
0810e811 +0x0d:  mov    0x1c(%ebp),%eax
0810e814 +0x10:  mov    %cx,-0xc(%ebp)
0810e818 +0x14:  mov    %dl,-0x10(%ebp)
0810e81b +0x17:  mov    %al,-0x14(%ebp)
0810e81e +0x1a:  movswl -0xc(%ebp),%edx
0810e822 +0x1e:  mov    0x10(%ebp),%eax
0810e825 +0x21:  mov    %edx,0x4(%esp)
0810e829 +0x25:  mov    %eax,(%esp)
0810e82c +0x28:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0810e831 +0x2d:  movzbl -0x10(%ebp),%eax
0810e835 +0x31:  mov    %eax,0x4(%esp)
0810e839 +0x35:  mov    0xc(%ebp),%eax
0810e83c +0x38:  mov    %eax,(%esp)
0810e83f +0x3b:  call   0868d3fe <_ZN5CUser24get_server_fatigue_countEh>  ; CUser::get_server_fatigue_count(unsigned char)
0810e844 +0x40:  movswl %ax,%ebx
0810e847 +0x43:  movzbl -0x10(%ebp),%eax
0810e84b +0x47:  mov    %eax,0x4(%esp)
0810e84f +0x4b:  mov    0xc(%ebp),%eax
0810e852 +0x4e:  mov    %eax,(%esp)
0810e855 +0x51:  call   0868d4c4 <_ZN5CUser20get_fatigue_count_dbEi>  ; CUser::get_fatigue_count_db(int)
0810e85a +0x56:  lea    (%ebx,%eax,1),%edx
0810e85d +0x59:  mov    0x10(%ebp),%eax
0810e860 +0x5c:  mov    %edx,0x4(%esp)
0810e864 +0x60:  mov    %eax,(%esp)
0810e867 +0x63:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0810e86c +0x68:  mov    $0x1,%eax
0810e871 +0x6d:  add    $0x24,%esp
0810e874 +0x70:  pop    %ebx
0810e875 +0x71:  pop    %ebp
0810e876 +0x72:  ret
0810e877 +0x73:  nop
```

## 反编译 C

```c
// EventClassify::CAttendance::send_init_data @ 0x810e804

/* EventClassify::CAttendance::send_init_data(CUser*, PacketGuard&, short, unsigned char, bool) */

undefined4
EventClassify::CAttendance::send_init_data
          (CUser *param_1,PacketGuard *param_2,short param_3,uchar param_4,bool param_5)

{
  short sVar1;
  int iVar2;
  undefined2 in_stack_0000000e;
  undefined3 in_stack_00000011;
  
  InterfacePacketBuf::put_short(_param_3,(int)(short)_param_4);
  sVar1 = CUser::get_server_fatigue_count((uchar)param_2);
  iVar2 = CUser::get_fatigue_count_db((CUser *)param_2,(uint)param_5);
  InterfacePacketBuf::put_short(_param_3,sVar1 + iVar2);
  return 1;
}
```
