# read

`_ZN25Dispatcher_RenameCreature4readER9PacketBufR8MSG_BASE`

`Dispatcher_RenameCreature::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RenameCreature` | `0x081ccfdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ccfdc  _ZN25Dispatcher_RenameCreature4readER9PacketBufR8MSG_BASE
#           Dispatcher_RenameCreature::read(PacketBuf&, MSG_BASE&)
# range [0x081ccfdc, 0x081cd10f]
081ccfdc +0x000:  push   %ebp
081ccfdd +0x001:  mov    %esp,%ebp
081ccfdf +0x003:  sub    $0x28,%esp
081ccfe2 +0x006:  mov    0x10(%ebp),%eax
081ccfe5 +0x009:  mov    %eax,-0xc(%ebp)
081ccfe8 +0x00c:  mov    -0xc(%ebp),%eax
081ccfeb +0x00f:  add    $0xe,%eax
081ccfee +0x012:  mov    %eax,0x4(%esp)
081ccff2 +0x016:  mov    0xc(%ebp),%eax
081ccff5 +0x019:  mov    %eax,(%esp)
081ccff8 +0x01c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081ccffd +0x021:  xor    $0x1,%eax
081cd000 +0x024:  test   %al,%al
081cd002 +0x026:  je     081cd02d <+0x51>
081cd004 +0x028:  movl   $0x0,0xc(%esp)
081cd00c +0x030:  movl   $0x0,0x8(%esp)
081cd014 +0x038:  movl   $&_ZZN25Dispatcher_RenameCreature4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cd01c +0x040:  movl   $0x24b4,(%esp)
081cd023 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cd028 +0x04c:  jmp    081cd10d <+0x131>
081cd02d +0x051:  mov    -0xc(%ebp),%eax
081cd030 +0x054:  add    $0xd,%eax
081cd033 +0x057:  mov    %eax,0x4(%esp)
081cd037 +0x05b:  mov    0xc(%ebp),%eax
081cd03a +0x05e:  mov    %eax,(%esp)
081cd03d +0x061:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081cd042 +0x066:  xor    $0x1,%eax
081cd045 +0x069:  test   %al,%al
081cd047 +0x06b:  je     081cd072 <+0x96>
081cd049 +0x06d:  movl   $0x0,0xc(%esp)
081cd051 +0x075:  movl   $0x0,0x8(%esp)
081cd059 +0x07d:  movl   $&_ZZN25Dispatcher_RenameCreature4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cd061 +0x085:  movl   $0x24b7,(%esp)
081cd068 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cd06d +0x091:  jmp    081cd10d <+0x131>
081cd072 +0x096:  mov    -0xc(%ebp),%eax
081cd075 +0x099:  add    $0x10,%eax
081cd078 +0x09c:  mov    %eax,0x4(%esp)
081cd07c +0x0a0:  mov    0xc(%ebp),%eax
081cd07f +0x0a3:  mov    %eax,(%esp)
081cd082 +0x0a6:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081cd087 +0x0ab:  xor    $0x1,%eax
081cd08a +0x0ae:  test   %al,%al
081cd08c +0x0b0:  je     081cd0b4 <+0xd8>
081cd08e +0x0b2:  movl   $0x0,0xc(%esp)
081cd096 +0x0ba:  movl   $0x0,0x8(%esp)
081cd09e +0x0c2:  movl   $&_ZZN25Dispatcher_RenameCreature4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cd0a6 +0x0ca:  movl   $0x24ba,(%esp)
081cd0ad +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cd0b2 +0x0d6:  jmp    081cd10d <+0x131>
081cd0b4 +0x0d8:  mov    -0xc(%ebp),%eax
081cd0b7 +0x0db:  mov    0x10(%eax),%eax
081cd0ba +0x0de:  mov    -0xc(%ebp),%edx
081cd0bd +0x0e1:  add    $0x14,%edx
081cd0c0 +0x0e4:  mov    %eax,0xc(%esp)
081cd0c4 +0x0e8:  movl   $0xd,0x8(%esp)
081cd0cc +0x0f0:  mov    %edx,0x4(%esp)
081cd0d0 +0x0f4:  mov    0xc(%ebp),%eax
081cd0d3 +0x0f7:  mov    %eax,(%esp)
081cd0d6 +0x0fa:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081cd0db +0x0ff:  xor    $0x1,%eax
081cd0de +0x102:  test   %al,%al
081cd0e0 +0x104:  je     081cd108 <+0x12c>
081cd0e2 +0x106:  movl   $0x0,0xc(%esp)
081cd0ea +0x10e:  movl   $0x0,0x8(%esp)
081cd0f2 +0x116:  movl   $&_ZZN25Dispatcher_RenameCreature4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cd0fa +0x11e:  movl   $0x24bd,(%esp)
081cd101 +0x125:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cd106 +0x12a:  jmp    081cd10d <+0x131>
081cd108 +0x12c:  mov    $0x0,%eax
081cd10d +0x131:  leave
081cd10e +0x132:  ret
081cd10f +0x133:  nop
```

## 反编译 C

```c
// Dispatcher_RenameCreature::read @ 0x81ccfdc

/* Dispatcher_RenameCreature::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RenameCreature::read
          (Dispatcher_RenameCreature *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x14),0xd,*(int *)(param_2 + 0x10));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x24bd,
                           "virtual int Dispatcher_RenameCreature::read(PacketBuf&, MSG_BASE&)",0,0)
          ;
        }
      }
      else {
        uVar2 = LineFunc(0x24ba,"virtual int Dispatcher_RenameCreature::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x24b7,"virtual int Dispatcher_RenameCreature::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x24b4,"virtual int Dispatcher_RenameCreature::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}
```
