# Logout

`_ZN15cUserHistoryLog6LogoutEPKcS1_iiih`

`cUserHistoryLog::Logout(char const*, char const*, int, int, int, unsigned char)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086840c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086840c4  _ZN15cUserHistoryLog6LogoutEPKcS1_iiih
#           cUserHistoryLog::Logout(char const*, char const*, int, int, int, unsigned char)
# range [0x086840c4, 0x08684129]
086840c4 +0x00:  push   %ebp
086840c5 +0x01:  mov    %esp,%ebp
086840c7 +0x03:  push   %ebx
086840c8 +0x04:  sub    $0x44,%esp
086840cb +0x07:  mov    0x20(%ebp),%eax
086840ce +0x0a:  mov    %al,-0xc(%ebp)
086840d1 +0x0d:  mov    0x8(%ebp),%eax
086840d4 +0x10:  mov    (%eax),%ebx
086840d6 +0x12:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086840db +0x17:  mov    %eax,(%esp)
086840de +0x1a:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
086840e3 +0x1f:  movzbl -0xc(%ebp),%ecx
086840e7 +0x23:  mov    0x8(%ebp),%edx
086840ea +0x26:  mov    (%edx),%edx
086840ec +0x28:  mov    %ebx,0x20(%esp)
086840f0 +0x2c:  mov    0x1c(%ebp),%ebx
086840f3 +0x2f:  mov    %ebx,0x1c(%esp)
086840f7 +0x33:  mov    %eax,0x18(%esp)
086840fb +0x37:  mov    %ecx,0x14(%esp)
086840ff +0x3b:  mov    0x18(%ebp),%eax
08684102 +0x3e:  mov    %eax,0x10(%esp)
08684106 +0x42:  mov    0x14(%ebp),%eax
08684109 +0x45:  mov    %eax,0xc(%esp)
0868410d +0x49:  mov    0x10(%ebp),%eax
08684110 +0x4c:  mov    %eax,0x8(%esp)
08684114 +0x50:  movl   $"IP-,%s,%d,%d,%d,%d,%d,%p",0x4(%esp)
0868411c +0x58:  mov    %edx,(%esp)
0868411f +0x5b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684124 +0x60:  add    $0x44,%esp
08684127 +0x63:  pop    %ebx
08684128 +0x64:  pop    %ebp
08684129 +0x65:  ret
```

## 反编译 C

```c
// cUserHistoryLog::Logout @ 0x86840c4

/* cUserHistoryLog::Logout(char const*, char const*, int, int, int, unsigned char) */

void __thiscall
cUserHistoryLog::Logout
          (cUserHistoryLog *this,char *param_1,char *param_2,int param_3,int param_4,int param_5,
          uchar param_6)

{
  undefined4 uVar1;
  CEnvironment *this_00;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)this;
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar2 = CEnvironment::get_server_group(this_00);
  CUser::LogHistory(*(CUser **)this,"IP-,%s,%d,%d,%d,%d,%d,%p",param_2,param_3,param_4,(uint)param_6
                    ,uVar2,param_5,uVar1);
  return;
}
```
