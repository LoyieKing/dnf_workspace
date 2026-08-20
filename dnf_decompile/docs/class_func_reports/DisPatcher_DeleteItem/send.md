# send

`_ZN21DisPatcher_DeleteItem4sendEP5CUserR9ParamBase`

`DisPatcher_DeleteItem::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DeleteItem` | `0x081c2792` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c2792  _ZN21DisPatcher_DeleteItem4sendEP5CUserR9ParamBase
#           DisPatcher_DeleteItem::send(CUser*, ParamBase&)
# range [0x081c2792, 0x081c2979]
081c2792 +0x000:  push   %ebp
081c2793 +0x001:  mov    %esp,%ebp
081c2795 +0x003:  push   %esi
081c2796 +0x004:  push   %ebx
081c2797 +0x005:  sub    $0x30,%esp
081c279a +0x008:  mov    0x10(%ebp),%eax
081c279d +0x00b:  mov    %eax,-0x10(%ebp)
081c27a0 +0x00e:  lea    -0x1c(%ebp),%eax
081c27a3 +0x011:  mov    %eax,(%esp)
081c27a6 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c27ab +0x019:  mov    -0x10(%ebp),%eax
081c27ae +0x01c:  mov    0x4(%eax),%eax
081c27b1 +0x01f:  cmp    $0x7fffffff,%eax
081c27b6 +0x024:  je     081c2968 <+0x1d6>
081c27bc +0x02a:  mov    -0x10(%ebp),%eax
081c27bf +0x02d:  mov    0x4(%eax),%eax
081c27c2 +0x030:  test   %eax,%eax
081c27c4 +0x032:  jne    081c28ca <+0x138>
081c27ca +0x038:  movl   $0x12,0x8(%esp)
081c27d2 +0x040:  movl   $0x1,0x4(%esp)
081c27da +0x048:  lea    -0x1c(%ebp),%eax
081c27dd +0x04b:  mov    %eax,(%esp)
081c27e0 +0x04e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c27e5 +0x053:  movl   $0x1,0x4(%esp)
081c27ed +0x05b:  lea    -0x1c(%ebp),%eax
081c27f0 +0x05e:  mov    %eax,(%esp)
081c27f3 +0x061:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c27f8 +0x066:  mov    -0x10(%ebp),%eax
081c27fb +0x069:  movzbl 0x8(%eax),%eax
081c27ff +0x06d:  movsbl %al,%eax
081c2802 +0x070:  mov    %eax,0x4(%esp)
081c2806 +0x074:  lea    -0x1c(%ebp),%eax
081c2809 +0x077:  mov    %eax,(%esp)
081c280c +0x07a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c2811 +0x07f:  mov    -0x10(%ebp),%eax
081c2814 +0x082:  movzbl 0x9(%eax),%eax
081c2818 +0x086:  movsbl %al,%eax
081c281b +0x089:  mov    %eax,0x4(%esp)
081c281f +0x08d:  lea    -0x1c(%ebp),%eax
081c2822 +0x090:  mov    %eax,(%esp)
081c2825 +0x093:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c282a +0x098:  movl   $0x0,-0xc(%ebp)
081c2831 +0x09f:  jmp    081c288c <+0xfa>
081c2833 +0x0a1:  mov    -0xc(%ebp),%edx
081c2836 +0x0a4:  mov    -0x10(%ebp),%eax
081c2839 +0x0a7:  add    $0x68,%edx
081c283c +0x0aa:  movzwl 0x2(%eax,%edx,2),%eax
081c2841 +0x0af:  cwtl
081c2842 +0x0b0:  mov    %eax,0x4(%esp)
081c2846 +0x0b4:  lea    -0x1c(%ebp),%eax
081c2849 +0x0b7:  mov    %eax,(%esp)
081c284c +0x0ba:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081c2851 +0x0bf:  mov    -0xc(%ebp),%edx
081c2854 +0x0c2:  mov    -0x10(%ebp),%eax
081c2857 +0x0c5:  add    $0x64,%edx
081c285a +0x0c8:  mov    0xc(%eax,%edx,4),%eax
081c285e +0x0cc:  mov    %eax,0x4(%esp)
081c2862 +0x0d0:  lea    -0x1c(%ebp),%eax
081c2865 +0x0d3:  mov    %eax,(%esp)
081c2868 +0x0d6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081c286d +0x0db:  mov    -0xc(%ebp),%edx
081c2870 +0x0de:  mov    -0x10(%ebp),%eax
081c2873 +0x0e1:  movzwl 0xa(%eax,%edx,2),%eax
081c2878 +0x0e6:  cwtl
081c2879 +0x0e7:  mov    %eax,0x4(%esp)
081c287d +0x0eb:  lea    -0x1c(%ebp),%eax
081c2880 +0x0ee:  mov    %eax,(%esp)
081c2883 +0x0f1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081c2888 +0x0f6:  addl   $0x1,-0xc(%ebp)
081c288c +0x0fa:  mov    -0x10(%ebp),%eax
081c288f +0x0fd:  movzbl 0x9(%eax),%eax
081c2893 +0x101:  movsbl %al,%eax
081c2896 +0x104:  cmp    -0xc(%ebp),%eax
081c2899 +0x107:  setg   %al
081c289c +0x10a:  test   %al,%al
081c289e +0x10c:  jne    081c2833 <+0xa1>
081c28a0 +0x10e:  movl   $0x1,0x4(%esp)
081c28a8 +0x116:  lea    -0x1c(%ebp),%eax
081c28ab +0x119:  mov    %eax,(%esp)
081c28ae +0x11c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c28b3 +0x121:  lea    -0x1c(%ebp),%eax
081c28b6 +0x124:  mov    %eax,0x4(%esp)
081c28ba +0x128:  mov    0xc(%ebp),%eax
081c28bd +0x12b:  mov    %eax,(%esp)
081c28c0 +0x12e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c28c5 +0x133:  jmp    081c2968 <+0x1d6>
081c28ca +0x138:  movl   $0x12,0x8(%esp)
081c28d2 +0x140:  movl   $0x1,0x4(%esp)
081c28da +0x148:  lea    -0x1c(%ebp),%eax
081c28dd +0x14b:  mov    %eax,(%esp)
081c28e0 +0x14e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c28e5 +0x153:  movl   $0x0,0x4(%esp)
081c28ed +0x15b:  lea    -0x1c(%ebp),%eax
081c28f0 +0x15e:  mov    %eax,(%esp)
081c28f3 +0x161:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c28f8 +0x166:  mov    -0x10(%ebp),%eax
081c28fb +0x169:  mov    0x4(%eax),%eax
081c28fe +0x16c:  mov    %eax,0x4(%esp)
081c2902 +0x170:  lea    -0x1c(%ebp),%eax
081c2905 +0x173:  mov    %eax,(%esp)
081c2908 +0x176:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c290d +0x17b:  mov    -0x10(%ebp),%eax
081c2910 +0x17e:  movzbl 0x8(%eax),%eax
081c2914 +0x182:  movsbl %al,%eax
081c2917 +0x185:  mov    %eax,0x4(%esp)
081c291b +0x189:  lea    -0x1c(%ebp),%eax
081c291e +0x18c:  mov    %eax,(%esp)
081c2921 +0x18f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c2926 +0x194:  movl   $0x1,0x4(%esp)
081c292e +0x19c:  lea    -0x1c(%ebp),%eax
081c2931 +0x19f:  mov    %eax,(%esp)
081c2934 +0x1a2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c2939 +0x1a7:  lea    -0x1c(%ebp),%eax
081c293c +0x1aa:  mov    %eax,0x4(%esp)
081c2940 +0x1ae:  mov    0xc(%ebp),%eax
081c2943 +0x1b1:  mov    %eax,(%esp)
081c2946 +0x1b4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c294b +0x1b9:  jmp    081c2968 <+0x1d6>
081c294d +0x1bb:  mov    %edx,%ebx
081c294f +0x1bd:  mov    %eax,%esi
081c2951 +0x1bf:  lea    -0x1c(%ebp),%eax
081c2954 +0x1c2:  mov    %eax,(%esp)
081c2957 +0x1c5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c295c +0x1ca:  mov    %esi,%eax
081c295e +0x1cc:  mov    %ebx,%edx
081c2960 +0x1ce:  mov    %eax,(%esp)
081c2963 +0x1d1:  call   08ae3750 <_Unwind_Resume>
081c2968 +0x1d6:  lea    -0x1c(%ebp),%eax
081c296b +0x1d9:  mov    %eax,(%esp)
081c296e +0x1dc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c2973 +0x1e1:  add    $0x30,%esp
081c2976 +0x1e4:  pop    %ebx
081c2977 +0x1e5:  pop    %esi
081c2978 +0x1e6:  pop    %ebp
081c2979 +0x1e7:  ret
```

## 反编译 C

```c
// DisPatcher_DeleteItem::send @ 0x81c2792

/* DisPatcher_DeleteItem::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_DeleteItem::send(DisPatcher_DeleteItem *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_20 [12];
  ParamBase *local_14;
  int local_10;
  
  local_14 = param_2;
  PacketGuard::PacketGuard(local_20);
  if (*(int *)(local_14 + 4) != 0x7fffffff) {
    if (*(int *)(local_14 + 4) == 0) {
                    /* try { // try from 081c27e0 to 081c294a has its CatchHandler @ 081c294d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x12);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)(char)local_14[8]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)(char)local_14[9]);
      for (local_10 = 0; local_10 < (char)local_14[9]; local_10 = local_10 + 1) {
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_20,
                   (int)*(short *)(local_14 + (local_10 + 0x68) * 2 + 2));
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_20,*(int *)(local_14 + (local_10 + 100) * 4 + 0xc));
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_20,(int)*(short *)(local_14 + local_10 * 2 + 10));
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send(param_1,local_20);
    }
    else {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x12);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_14 + 4));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)(char)local_14[8]);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send(param_1,local_20);
    }
  }
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
