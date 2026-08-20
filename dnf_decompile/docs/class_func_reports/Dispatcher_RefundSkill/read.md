# read

`_ZN22Dispatcher_RefundSkill4readER9PacketBufR8MSG_BASE`

`Dispatcher_RefundSkill::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RefundSkill` | `0x081da6fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081da6fe  _ZN22Dispatcher_RefundSkill4readER9PacketBufR8MSG_BASE
#           Dispatcher_RefundSkill::read(PacketBuf&, MSG_BASE&)
# range [0x081da6fe, 0x081da81f]
081da6fe +0x000:  push   %ebp
081da6ff +0x001:  mov    %esp,%ebp
081da701 +0x003:  sub    $0x28,%esp
081da704 +0x006:  mov    0x10(%ebp),%eax
081da707 +0x009:  mov    %eax,-0xc(%ebp)
081da70a +0x00c:  mov    -0xc(%ebp),%eax
081da70d +0x00f:  add    $0xd,%eax
081da710 +0x012:  mov    %eax,0x4(%esp)
081da714 +0x016:  mov    0xc(%ebp),%eax
081da717 +0x019:  mov    %eax,(%esp)
081da71a +0x01c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081da71f +0x021:  xor    $0x1,%eax
081da722 +0x024:  test   %al,%al
081da724 +0x026:  je     081da74f <+0x51>
081da726 +0x028:  movl   $0x0,0xc(%esp)
081da72e +0x030:  movl   $0x0,0x8(%esp)
081da736 +0x038:  movl   $&_ZZN22Dispatcher_RefundSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081da73e +0x040:  movl   $0x48e5,(%esp)
081da745 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081da74a +0x04c:  jmp    081da81d <+0x11f>
081da74f +0x051:  mov    -0xc(%ebp),%eax
081da752 +0x054:  add    $0x11,%eax
081da755 +0x057:  mov    %eax,0x4(%esp)
081da759 +0x05b:  mov    0xc(%ebp),%eax
081da75c +0x05e:  mov    %eax,(%esp)
081da75f +0x061:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081da764 +0x066:  xor    $0x1,%eax
081da767 +0x069:  test   %al,%al
081da769 +0x06b:  je     081da794 <+0x96>
081da76b +0x06d:  movl   $0x0,0xc(%esp)
081da773 +0x075:  movl   $0x0,0x8(%esp)
081da77b +0x07d:  movl   $&_ZZN22Dispatcher_RefundSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081da783 +0x085:  movl   $0x48e7,(%esp)
081da78a +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081da78f +0x091:  jmp    081da81d <+0x11f>
081da794 +0x096:  mov    -0xc(%ebp),%eax
081da797 +0x099:  add    $0x12,%eax
081da79a +0x09c:  mov    %eax,0x4(%esp)
081da79e +0x0a0:  mov    0xc(%ebp),%eax
081da7a1 +0x0a3:  mov    %eax,(%esp)
081da7a4 +0x0a6:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081da7a9 +0x0ab:  xor    $0x1,%eax
081da7ac +0x0ae:  test   %al,%al
081da7ae +0x0b0:  je     081da7d6 <+0xd8>
081da7b0 +0x0b2:  movl   $0x0,0xc(%esp)
081da7b8 +0x0ba:  movl   $0x0,0x8(%esp)
081da7c0 +0x0c2:  movl   $&_ZZN22Dispatcher_RefundSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081da7c8 +0x0ca:  movl   $0x48e9,(%esp)
081da7cf +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081da7d4 +0x0d6:  jmp    081da81d <+0x11f>
081da7d6 +0x0d8:  mov    -0xc(%ebp),%eax
081da7d9 +0x0db:  add    $0x13,%eax
081da7dc +0x0de:  mov    %eax,0x4(%esp)
081da7e0 +0x0e2:  mov    0xc(%ebp),%eax
081da7e3 +0x0e5:  mov    %eax,(%esp)
081da7e6 +0x0e8:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081da7eb +0x0ed:  xor    $0x1,%eax
081da7ee +0x0f0:  test   %al,%al
081da7f0 +0x0f2:  je     081da818 <+0x11a>
081da7f2 +0x0f4:  movl   $0x0,0xc(%esp)
081da7fa +0x0fc:  movl   $0x0,0x8(%esp)
081da802 +0x104:  movl   $&_ZZN22Dispatcher_RefundSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081da80a +0x10c:  movl   $0x48eb,(%esp)
081da811 +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081da816 +0x118:  jmp    081da81d <+0x11f>
081da818 +0x11a:  mov    $0x0,%eax
081da81d +0x11f:  leave
081da81e +0x120:  ret
081da81f +0x121:  nop
```

## 反编译 C

```c
// Dispatcher_RefundSkill::read @ 0x81da6fe

/* Dispatcher_RefundSkill::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RefundSkill::read(Dispatcher_RefundSkill *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x12));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x13));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x48eb,"virtual int Dispatcher_RefundSkill::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x48e9,"virtual int Dispatcher_RefundSkill::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x48e7,"virtual int Dispatcher_RefundSkill::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x48e5,"virtual int Dispatcher_RefundSkill::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
