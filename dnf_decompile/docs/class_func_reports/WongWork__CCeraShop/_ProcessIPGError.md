# _ProcessIPGError

`_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic`

`WongWork::CCeraShop::_ProcessIPGError(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, unsigned char, int, unsigned int, int, int, char)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x083237f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083237f6  _ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic
#           WongWork::CCeraShop::_ProcessIPGError(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, unsigned char, int, unsigned int, int, int, char)
# range [0x083237f6, 0x08323977]
083237f6 +0x000:  push   %ebp
083237f7 +0x001:  mov    %esp,%ebp
083237f9 +0x003:  push   %edi
083237fa +0x004:  push   %esi
083237fb +0x005:  push   %ebx
083237fc +0x006:  sub    $0x4c,%esp
083237ff +0x009:  mov    0x18(%ebp),%edx
08323802 +0x00c:  mov    0x2c(%ebp),%eax
08323805 +0x00f:  mov    %dl,-0x1c(%ebp)
08323808 +0x012:  mov    %al,-0x20(%ebp)
0832380b +0x015:  mov    0x14(%ebp),%eax
0832380e +0x018:  mov    0x1c(%eax),%eax
08323811 +0x01b:  cmp    $0x2,%eax
08323814 +0x01e:  jne    08323929 <+0x133>
0832381a +0x024:  mov    0x14(%ebp),%eax
0832381d +0x027:  add    $0x173,%eax
08323822 +0x02c:  mov    %eax,(%esp)
08323825 +0x02f:  call   0807e6f0 <_init+0xfe8>
0832382a +0x034:  cmp    $0x1,%eax
0832382d +0x037:  jne    083238ea <+0xf4>
08323833 +0x03d:  cmpl   $0x0,0xc(%ebp)
08323837 +0x041:  je     083238c1 <+0xcb>
0832383d +0x047:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08323842 +0x04c:  mov    (%eax),%eax
08323844 +0x04e:  add    $0x1c,%eax
08323847 +0x051:  mov    (%eax),%eax
08323849 +0x053:  mov    %eax,-0x28(%ebp)
0832384c +0x056:  mov    0x10(%ebp),%eax
0832384f +0x059:  add    $0xf5,%eax
08323854 +0x05e:  mov    %eax,%ecx
08323856 +0x060:  mov    0x10(%ebp),%eax
08323859 +0x063:  add    $0x91,%eax
0832385e +0x068:  mov    %eax,-0x24(%ebp)
08323861 +0x06b:  mov    0x10(%ebp),%eax
08323864 +0x06e:  add    $0x7d,%eax
08323867 +0x071:  mov    %eax,%edi
08323869 +0x073:  mov    0x10(%ebp),%eax
0832386c +0x076:  add    $0x71,%eax
0832386f +0x079:  mov    %eax,%esi
08323871 +0x07b:  mov    0x10(%ebp),%eax
08323874 +0x07e:  add    $0x69,%eax
08323877 +0x081:  mov    %eax,%ebx
08323879 +0x083:  mov    0x14(%ebp),%eax
0832387c +0x086:  add    $0x159,%eax
08323881 +0x08b:  mov    &_ZN10GlobalData12s_pIPGHelperE,%edx
08323887 +0x091:  movl   $0x0,0x24(%esp)
0832388f +0x099:  movl   $0x0,0x20(%esp)
08323897 +0x0a1:  mov    %ecx,0x1c(%esp)
0832389b +0x0a5:  mov    -0x24(%ebp),%ecx
0832389e +0x0a8:  mov    %ecx,0x18(%esp)
083238a2 +0x0ac:  mov    %edi,0x14(%esp)
083238a6 +0x0b0:  mov    %esi,0x10(%esp)
083238aa +0x0b4:  mov    %ebx,0xc(%esp)
083238ae +0x0b8:  mov    %eax,0x8(%esp)
083238b2 +0x0bc:  mov    0xc(%ebp),%eax
083238b5 +0x0bf:  mov    %eax,0x4(%esp)
083238b9 +0x0c3:  mov    %edx,(%esp)
083238bc +0x0c6:  call   *-0x28(%ebp)
083238bf +0x0c9:  jmp    08323929 <+0x133>
083238c1 +0x0cb:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
083238c6 +0x0d0:  mov    (%eax),%eax
083238c8 +0x0d2:  add    $0x24,%eax
083238cb +0x0d5:  mov    (%eax),%ecx
083238cd +0x0d7:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
083238d2 +0x0dc:  mov    0x14(%ebp),%edx
083238d5 +0x0df:  mov    %edx,0x8(%esp)
083238d9 +0x0e3:  mov    0x10(%ebp),%edx
083238dc +0x0e6:  mov    %edx,0x4(%esp)
083238e0 +0x0ea:  mov    %eax,(%esp)
083238e3 +0x0ed:  call   *%ecx
083238e5 +0x0ef:  jmp    08323970 <+0x17a>
083238ea +0x0f4:  mov    0x14(%ebp),%eax
083238ed +0x0f7:  add    $0x177,%eax
083238f2 +0x0fc:  mov    %eax,0x18(%esp)
083238f6 +0x100:  mov    0x20(%ebp),%eax
083238f9 +0x103:  mov    %eax,0x14(%esp)
083238fd +0x107:  movl   $"IPG ERROR (Goods No: %d)(%s)",0x10(%esp)
08323905 +0x10f:  movl   $0xb47,0xc(%esp)
0832390d +0x117:  movl   $&_ZZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiicE19__PRETTY_FUNCTION__,0x8(%esp)
08323915 +0x11f:  movl   $"CeraShop.cpp",0x4(%esp)
0832391d +0x127:  movl   $0x1,(%esp)
08323924 +0x12e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08323929 +0x133:  cmpl   $0x0,0xc(%ebp)
0832392d +0x137:  je     0832396f <+0x179>
0832392f +0x139:  movsbl -0x20(%ebp),%edx
08323933 +0x13d:  movzbl -0x1c(%ebp),%eax
08323937 +0x141:  mov    %edx,0x1c(%esp)
0832393b +0x145:  mov    0x28(%ebp),%edx
0832393e +0x148:  mov    %edx,0x18(%esp)
08323942 +0x14c:  mov    0x24(%ebp),%edx
08323945 +0x14f:  mov    %edx,0x14(%esp)
08323949 +0x153:  mov    0x20(%ebp),%edx
0832394c +0x156:  mov    %edx,0x10(%esp)
08323950 +0x15a:  mov    0x1c(%ebp),%edx
08323953 +0x15d:  mov    %edx,0xc(%esp)
08323957 +0x161:  mov    %eax,0x8(%esp)
0832395b +0x165:  mov    0xc(%ebp),%eax
0832395e +0x168:  mov    %eax,0x4(%esp)
08323962 +0x16c:  mov    0x8(%ebp),%eax
08323965 +0x16f:  mov    %eax,(%esp)
08323968 +0x172:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
0832396d +0x177:  jmp    08323970 <+0x17a>
0832396f +0x179:  nop
08323970 +0x17a:  add    $0x4c,%esp
08323973 +0x17d:  pop    %ebx
08323974 +0x17e:  pop    %esi
08323975 +0x17f:  pop    %edi
08323976 +0x180:  pop    %ebp
08323977 +0x181:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::_ProcessIPGError @ 0x83237f6

/* WongWork::CCeraShop::_ProcessIPGError(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*,
   unsigned char, int, unsigned int, int, int, char) */

void __thiscall
WongWork::CCeraShop::_ProcessIPGError
          (CCeraShop *this,CUser *param_1,SIPGData *param_2,SIPGData *param_3,uchar param_4,
          int param_5,uint param_6,int param_7,int param_8,char param_9)

{
  int iVar1;
  
  if (*(int *)(param_3 + 0x1c) == 2) {
    iVar1 = atoi((char *)(param_3 + 0x173));
    if (iVar1 == 1) {
      if (param_1 == (CUser *)0x0) {
        (**(code **)(*GlobalData::s_pIPGHelper + 0x24))(GlobalData::s_pIPGHelper,param_2,param_3);
        return;
      }
      (**(code **)(*GlobalData::s_pIPGHelper + 0x1c))
                (GlobalData::s_pIPGHelper,param_1,param_3 + 0x159,param_2 + 0x69,param_2 + 0x71,
                 param_2 + 0x7d,param_2 + 0x91,param_2 + 0xf5,0,0);
    }
    else {
      LogManager::logFormat
                (1,"CeraShop.cpp",
                 "void WongWork::CCeraShop::_ProcessIPGError(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, unsigned char, int, unsigned int, int, int, char)"
                 ,0xb47,"IPG ERROR (Goods No: %d)(%s)",param_6,param_3 + 0x177);
    }
  }
  if (param_1 != (CUser *)0x0) {
    ProcessError(this,param_1,(ushort)param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}
```
