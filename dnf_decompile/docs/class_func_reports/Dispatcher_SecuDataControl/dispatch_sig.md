# dispatch_sig

`_ZN26Dispatcher_SecuDataControl12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_SecuDataControl::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecuDataControl` | `0x0821f612` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821f612  _ZN26Dispatcher_SecuDataControl12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_SecuDataControl::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821f612, 0x0821f729]
0821f612 +0x000:  push   %ebp
0821f613 +0x001:  mov    %esp,%ebp
0821f615 +0x003:  push   %ebx
0821f616 +0x004:  sub    $0x34,%esp
0821f619 +0x007:  movb   $0x0,-0x9(%ebp)
0821f61d +0x00b:  movw   $0x0,-0xc(%ebp)
0821f623 +0x011:  movw   $0x0,-0xe(%ebp)
0821f629 +0x017:  lea    -0x9(%ebp),%eax
0821f62c +0x01a:  mov    %eax,0x4(%esp)
0821f630 +0x01e:  mov    0x10(%ebp),%eax
0821f633 +0x021:  mov    %eax,(%esp)
0821f636 +0x024:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821f63b +0x029:  xor    $0x1,%eax
0821f63e +0x02c:  test   %al,%al
0821f640 +0x02e:  je     0821f66b <+0x59>
0821f642 +0x030:  movl   $0x0,0xc(%esp)
0821f64a +0x038:  movl   $0x0,0x8(%esp)
0821f652 +0x040:  movl   $&_ZZN26Dispatcher_SecuDataControl12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f65a +0x048:  movl   $0xd838,(%esp)
0821f661 +0x04f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f666 +0x054:  jmp    0821f723 <+0x111>
0821f66b +0x059:  lea    -0xc(%ebp),%eax
0821f66e +0x05c:  mov    %eax,0x4(%esp)
0821f672 +0x060:  mov    0x10(%ebp),%eax
0821f675 +0x063:  mov    %eax,(%esp)
0821f678 +0x066:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821f67d +0x06b:  xor    $0x1,%eax
0821f680 +0x06e:  test   %al,%al
0821f682 +0x070:  je     0821f6aa <+0x98>
0821f684 +0x072:  movl   $0x0,0xc(%esp)
0821f68c +0x07a:  movl   $0x0,0x8(%esp)
0821f694 +0x082:  movl   $&_ZZN26Dispatcher_SecuDataControl12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f69c +0x08a:  movl   $0xd839,(%esp)
0821f6a3 +0x091:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f6a8 +0x096:  jmp    0821f723 <+0x111>
0821f6aa +0x098:  lea    -0xe(%ebp),%eax
0821f6ad +0x09b:  mov    %eax,0x4(%esp)
0821f6b1 +0x09f:  mov    0x10(%ebp),%eax
0821f6b4 +0x0a2:  mov    %eax,(%esp)
0821f6b7 +0x0a5:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821f6bc +0x0aa:  xor    $0x1,%eax
0821f6bf +0x0ad:  test   %al,%al
0821f6c1 +0x0af:  je     0821f6e9 <+0xd7>
0821f6c3 +0x0b1:  movl   $0x0,0xc(%esp)
0821f6cb +0x0b9:  movl   $0x0,0x8(%esp)
0821f6d3 +0x0c1:  movl   $&_ZZN26Dispatcher_SecuDataControl12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f6db +0x0c9:  movl   $0xd83a,(%esp)
0821f6e2 +0x0d0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f6e7 +0x0d5:  jmp    0821f723 <+0x111>
0821f6e9 +0x0d7:  movzwl -0xe(%ebp),%eax
0821f6ed +0x0db:  movzwl %ax,%ebx
0821f6f0 +0x0de:  movzwl -0xc(%ebp),%eax
0821f6f4 +0x0e2:  movzwl %ax,%ecx
0821f6f7 +0x0e5:  movzbl -0x9(%ebp),%eax
0821f6fb +0x0e9:  movzbl %al,%edx
0821f6fe +0x0ec:  mov    &_ZN10GlobalData18s_pSecuDataControlE,%eax
0821f703 +0x0f1:  mov    %ebx,0x10(%esp)
0821f707 +0x0f5:  mov    %ecx,0xc(%esp)
0821f70b +0x0f9:  mov    %edx,0x8(%esp)
0821f70f +0x0fd:  mov    0xc(%ebp),%edx
0821f712 +0x100:  mov    %edx,0x4(%esp)
0821f716 +0x104:  mov    %eax,(%esp)
0821f719 +0x107:  call   08286a30 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt>  ; Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)
0821f71e +0x10c:  mov    $0x0,%eax
0821f723 +0x111:  add    $0x34,%esp
0821f726 +0x114:  pop    %ebx
0821f727 +0x115:  pop    %ebp
0821f728 +0x116:  ret
0821f729 +0x117:  nop
```

## 反编译 C

```c
// Dispatcher_SecuDataControl::dispatch_sig @ 0x821f612

/* Dispatcher_SecuDataControl::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SecuDataControl::dispatch_sig
          (Dispatcher_SecuDataControl *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  ushort local_12;
  ushort local_10;
  uchar local_d [5];
  
  local_d[0] = '\0';
  local_10 = 0;
  local_12 = 0;
  cVar1 = PacketBuf::get_byte(param_2,local_d);
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_2,&local_10);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_2,&local_12);
      if (cVar1 == '\x01') {
        Secu_DataControl::SetControlData
                  (GlobalData::s_pSecuDataControl,param_1,local_d[0],local_10,local_12);
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0xd83a,
                         "virtual int Dispatcher_SecuDataControl::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      uVar2 = LineFunc(0xd839,
                       "virtual int Dispatcher_SecuDataControl::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0xd838,
                     "virtual int Dispatcher_SecuDataControl::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  return uVar2;
}
```
