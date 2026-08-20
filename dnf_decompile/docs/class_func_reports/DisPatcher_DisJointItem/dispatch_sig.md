# dispatch_sig

`_ZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_DisJointItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DisJointItem` | `0x081f9fb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f9fb8  _ZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_DisJointItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f9fb8, 0x081fa0f5]
081f9fb8 +0x000:  push   %ebp
081f9fb9 +0x001:  mov    %esp,%ebp
081f9fbb +0x003:  sub    $0x48,%esp
081f9fbe +0x006:  cmpl   $0x0,0xc(%ebp)
081f9fc2 +0x00a:  je     081f9fd3 <+0x1b>
081f9fc4 +0x00c:  mov    0xc(%ebp),%eax
081f9fc7 +0x00f:  mov    %eax,(%esp)
081f9fca +0x012:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081f9fcf +0x017:  test   %al,%al
081f9fd1 +0x019:  je     081f9fda <+0x22>
081f9fd3 +0x01b:  mov    $0x1,%eax
081f9fd8 +0x020:  jmp    081f9fdf <+0x27>
081f9fda +0x022:  mov    $0x0,%eax
081f9fdf +0x027:  test   %al,%al
081f9fe1 +0x029:  je     081f9fed <+0x35>
081f9fe3 +0x02b:  mov    $0x0,%eax
081f9fe8 +0x030:  jmp    081fa0f4 <+0x13c>
081f9fed +0x035:  lea    -0x17(%ebp),%eax
081f9ff0 +0x038:  add    $0xd,%eax
081f9ff3 +0x03b:  mov    %eax,0x4(%esp)
081f9ff7 +0x03f:  mov    0x10(%ebp),%eax
081f9ffa +0x042:  mov    %eax,(%esp)
081f9ffd +0x045:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081fa002 +0x04a:  xor    $0x1,%eax
081fa005 +0x04d:  test   %al,%al
081fa007 +0x04f:  je     081fa032 <+0x7a>
081fa009 +0x051:  movl   $0x0,0xc(%esp)
081fa011 +0x059:  movl   $0x0,0x8(%esp)
081fa019 +0x061:  movl   $&_ZZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fa021 +0x069:  movl   $0x88d0,(%esp)
081fa028 +0x070:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fa02d +0x075:  jmp    081fa0f4 <+0x13c>
081fa032 +0x07a:  movb   $0x0,-0x18(%ebp)
081fa036 +0x07e:  lea    -0x18(%ebp),%eax
081fa039 +0x081:  mov    %eax,0x4(%esp)
081fa03d +0x085:  mov    0x10(%ebp),%eax
081fa040 +0x088:  mov    %eax,(%esp)
081fa043 +0x08b:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081fa048 +0x090:  xor    $0x1,%eax
081fa04b +0x093:  test   %al,%al
081fa04d +0x095:  je     081fa075 <+0xbd>
081fa04f +0x097:  movl   $0x0,0xc(%esp)
081fa057 +0x09f:  movl   $0x0,0x8(%esp)
081fa05f +0x0a7:  movl   $&_ZZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fa067 +0x0af:  movl   $0x88d2,(%esp)
081fa06e +0x0b6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fa073 +0x0bb:  jmp    081fa0f4 <+0x13c>
081fa075 +0x0bd:  movw   $0xffff,-0x1a(%ebp)
081fa07b +0x0c3:  lea    -0x1a(%ebp),%eax
081fa07e +0x0c6:  mov    %eax,0x4(%esp)
081fa082 +0x0ca:  mov    0x10(%ebp),%eax
081fa085 +0x0cd:  mov    %eax,(%esp)
081fa088 +0x0d0:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081fa08d +0x0d5:  xor    $0x1,%eax
081fa090 +0x0d8:  test   %al,%al
081fa092 +0x0da:  je     081fa0ba <+0x102>
081fa094 +0x0dc:  movl   $0x0,0xc(%esp)
081fa09c +0x0e4:  movl   $0x0,0x8(%esp)
081fa0a4 +0x0ec:  movl   $&_ZZN23DisPatcher_DisJointItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fa0ac +0x0f4:  movl   $0x88d6,(%esp)
081fa0b3 +0x0fb:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fa0b8 +0x100:  jmp    081fa0f4 <+0x13c>
081fa0ba +0x102:  movzwl -0x1a(%ebp),%eax
081fa0be +0x106:  movzwl %ax,%ecx
081fa0c1 +0x109:  movzbl -0x18(%ebp),%eax
081fa0c5 +0x10d:  movsbl %al,%edx
081fa0c8 +0x110:  movzwl -0xa(%ebp),%eax
081fa0cc +0x114:  cwtl
081fa0cd +0x115:  mov    %ecx,0x14(%esp)
081fa0d1 +0x119:  movl   $0x0,0x10(%esp)
081fa0d9 +0x121:  movl   $0x1c,0xc(%esp)
081fa0e1 +0x129:  mov    %edx,0x8(%esp)
081fa0e5 +0x12d:  mov    %eax,0x4(%esp)
081fa0e9 +0x131:  mov    0xc(%ebp),%eax
081fa0ec +0x134:  mov    %eax,(%esp)
081fa0ef +0x137:  call   081f92ca <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t>  ; DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, unsigned short)
081fa0f4 +0x13c:  leave
081fa0f5 +0x13d:  ret
```

## 反编译 C

```c
// DisPatcher_DisJointItem::dispatch_sig @ 0x81f9fb8

/* DisPatcher_DisJointItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_DisJointItem::dispatch_sig
          (DisPatcher_DisJointItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ushort local_1e;
  char local_1c [14];
  short local_e [5];
  
  if (param_1 != (CUser *)0x0) {
    cVar2 = CUser::CheckInTrade(param_1);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_081f9fdf;
    }
  }
  bVar1 = true;
LAB_081f9fdf:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    cVar2 = PacketBuf::get_short(param_2,local_e);
    if (cVar2 == '\x01') {
      local_1c[0] = '\0';
      cVar2 = PacketBuf::get_byte(param_2,local_1c);
      if (cVar2 == '\x01') {
        local_1e = 0xffff;
        cVar2 = PacketBuf::get_short(param_2,&local_1e);
        if (cVar2 == '\x01') {
          uVar3 = _disjoint(param_1,(int)local_e[0],(int)local_1c[0],0x1c,0,local_1e);
        }
        else {
          uVar3 = LineFunc(0x88d6,
                           "virtual int DisPatcher_DisJointItem::dispatch_sig(CUser*, PacketBuf&)",0
                           ,0);
        }
      }
      else {
        uVar3 = LineFunc(0x88d2,
                         "virtual int DisPatcher_DisJointItem::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
      }
    }
    else {
      uVar3 = LineFunc(0x88d0,
                       "virtual int DisPatcher_DisJointItem::dispatch_sig(CUser*, PacketBuf&)",0,0);
    }
  }
  return uVar3;
}
```
