# dispatch_sig

`_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Change_Charac_Slot::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Change_Charac_Slot` | `0x082251f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082251f4  _ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Change_Charac_Slot::dispatch_sig(CUser*, PacketBuf&)
# range [0x082251f4, 0x082252fd]
082251f4 +0x000:  push   %ebp
082251f5 +0x001:  mov    %esp,%ebp
082251f7 +0x003:  sub    $0x28,%esp
082251fa +0x006:  mov    0xc(%ebp),%eax
082251fd +0x009:  mov    %eax,(%esp)
08225200 +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08225205 +0x011:  cmp    $0x2,%eax
08225208 +0x014:  setne  %al
0822520b +0x017:  test   %al,%al
0822520d +0x019:  je     08225219 <+0x25>
0822520f +0x01b:  mov    $0x0,%eax
08225214 +0x020:  jmp    082252fb <+0x107>
08225219 +0x025:  lea    -0x10(%ebp),%eax
0822521c +0x028:  mov    %eax,0x4(%esp)
08225220 +0x02c:  mov    0x10(%ebp),%eax
08225223 +0x02f:  mov    %eax,(%esp)
08225226 +0x032:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0822522b +0x037:  xor    $0x1,%eax
0822522e +0x03a:  test   %al,%al
08225230 +0x03c:  jne    0822524b <+0x57>
08225232 +0x03e:  lea    -0x14(%ebp),%eax
08225235 +0x041:  mov    %eax,0x4(%esp)
08225239 +0x045:  mov    0x10(%ebp),%eax
0822523c +0x048:  mov    %eax,(%esp)
0822523f +0x04b:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08225244 +0x050:  xor    $0x1,%eax
08225247 +0x053:  test   %al,%al
08225249 +0x055:  je     08225252 <+0x5e>
0822524b +0x057:  mov    $0x1,%eax
08225250 +0x05c:  jmp    08225257 <+0x63>
08225252 +0x05e:  mov    $0x0,%eax
08225257 +0x063:  test   %al,%al
08225259 +0x065:  je     08225281 <+0x8d>
0822525b +0x067:  movl   $0x0,0xc(%esp)
08225263 +0x06f:  movl   $0x0,0x8(%esp)
0822526b +0x077:  movl   $&_ZZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08225273 +0x07f:  movl   $0xdff5,(%esp)
0822527a +0x086:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822527f +0x08b:  jmp    082252fb <+0x107>
08225281 +0x08d:  mov    0xc(%ebp),%eax
08225284 +0x090:  mov    %eax,(%esp)
08225287 +0x093:  call   0864aa0a <_ZN5CUser17isLocked4DataLoadEv>  ; CUser::isLocked4DataLoad()
0822528c +0x098:  test   %al,%al
0822528e +0x09a:  jne    0822529f <+0xab>
08225290 +0x09c:  mov    0xc(%ebp),%eax
08225293 +0x09f:  mov    %eax,(%esp)
08225296 +0x0a2:  call   0864aae6 <_ZN5CUser20isLockedCreateCharacEv>  ; CUser::isLockedCreateCharac()
0822529b +0x0a7:  test   %al,%al
0822529d +0x0a9:  je     082252a6 <+0xb2>
0822529f +0x0ab:  mov    $0x1,%eax
082252a4 +0x0b0:  jmp    082252ab <+0xb7>
082252a6 +0x0b2:  mov    $0x0,%eax
082252ab +0x0b7:  mov    %al,-0x9(%ebp)
082252ae +0x0ba:  cmpb   $0x0,-0x9(%ebp)
082252b2 +0x0be:  jne    082252c3 <+0xcf>
082252b4 +0x0c0:  mov    0xc(%ebp),%eax
082252b7 +0x0c3:  mov    %eax,(%esp)
082252ba +0x0c6:  call   0864aa78 <_ZN5CUser20isLockedDeleteCharacEv>  ; CUser::isLockedDeleteCharac()
082252bf +0x0cb:  test   %al,%al
082252c1 +0x0cd:  je     082252ca <+0xd6>
082252c3 +0x0cf:  mov    $0x1,%eax
082252c8 +0x0d4:  jmp    082252cf <+0xdb>
082252ca +0x0d6:  mov    $0x0,%eax
082252cf +0x0db:  mov    %al,-0x9(%ebp)
082252d2 +0x0de:  movzbl -0x9(%ebp),%eax
082252d6 +0x0e2:  xor    $0x1,%eax
082252d9 +0x0e5:  test   %al,%al
082252db +0x0e7:  je     082252f6 <+0x102>
082252dd +0x0e9:  mov    -0x14(%ebp),%edx
082252e0 +0x0ec:  mov    -0x10(%ebp),%eax
082252e3 +0x0ef:  mov    %edx,0x8(%esp)
082252e7 +0x0f3:  mov    %eax,0x4(%esp)
082252eb +0x0f7:  mov    0xc(%ebp),%eax
082252ee +0x0fa:  mov    %eax,(%esp)
082252f1 +0x0fd:  call   08651b7a <_ZN5CUser16ChangeCharacSlotEjj>  ; CUser::ChangeCharacSlot(unsigned int, unsigned int)
082252f6 +0x102:  mov    $0x0,%eax
082252fb +0x107:  leave
082252fc +0x108:  ret
082252fd +0x109:  nop
```

## 反编译 C

```c
// Dispatcher_Change_Charac_Slot::dispatch_sig @ 0x82251f4

/* Dispatcher_Change_Charac_Slot::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Change_Charac_Slot::dispatch_sig
          (Dispatcher_Change_Charac_Slot *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_18;
  uint local_14;
  char local_d;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 2) {
    return 0;
  }
  cVar2 = PacketBuf::get_int(param_2,&local_14);
  if ((cVar2 == '\x01') && (cVar2 = PacketBuf::get_int(param_2,&local_18), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    cVar2 = CUser::isLocked4DataLoad(param_1);
    if ((cVar2 == '\0') && (cVar2 = CUser::isLockedCreateCharac(param_1), cVar2 == '\0')) {
      local_d = '\0';
    }
    else {
      local_d = '\x01';
    }
    if ((local_d == '\0') && (cVar2 = CUser::isLockedDeleteCharac(param_1), cVar2 == '\0')) {
      local_d = '\0';
    }
    else {
      local_d = '\x01';
    }
    if (local_d != '\x01') {
      CUser::ChangeCharacSlot(param_1,local_14,local_18);
    }
    return 0;
  }
  uVar4 = LineFunc(0xdff5,
                   "virtual int Dispatcher_Change_Charac_Slot::dispatch_sig(CUser*, PacketBuf&)",0,0
                  );
  return uVar4;
}
```
