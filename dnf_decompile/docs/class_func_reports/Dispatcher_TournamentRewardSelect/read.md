# read

`_ZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASE`

`Dispatcher_TournamentRewardSelect::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TournamentRewardSelect` | `0x081dffda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dffda  _ZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASE
#           Dispatcher_TournamentRewardSelect::read(PacketBuf&, MSG_BASE&)
# range [0x081dffda, 0x081e00ef]
081dffda +0x000:  push   %ebp
081dffdb +0x001:  mov    %esp,%ebp
081dffdd +0x003:  sub    $0x28,%esp
081dffe0 +0x006:  mov    0x10(%ebp),%eax
081dffe3 +0x009:  mov    %eax,-0xc(%ebp)
081dffe6 +0x00c:  mov    -0xc(%ebp),%eax
081dffe9 +0x00f:  add    $0xd,%eax
081dffec +0x012:  mov    %eax,0x4(%esp)
081dfff0 +0x016:  mov    0xc(%ebp),%eax
081dfff3 +0x019:  mov    %eax,(%esp)
081dfff6 +0x01c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081dfffb +0x021:  xor    $0x1,%eax
081dfffe +0x024:  test   %al,%al
081e0000 +0x026:  je     081e002b <+0x51>
081e0002 +0x028:  movl   $0x0,0xc(%esp)
081e000a +0x030:  movl   $0x0,0x8(%esp)
081e0012 +0x038:  movl   $&_ZZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e001a +0x040:  movl   $0x52fd,(%esp)
081e0021 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e0026 +0x04c:  jmp    081e00ed <+0x113>
081e002b +0x051:  mov    -0xc(%ebp),%eax
081e002e +0x054:  movzbl 0xd(%eax),%eax
081e0032 +0x058:  test   %al,%al
081e0034 +0x05a:  js     081e0041 <+0x67>
081e0036 +0x05c:  mov    -0xc(%ebp),%eax
081e0039 +0x05f:  movzbl 0xd(%eax),%eax
081e003d +0x063:  cmp    $0x1,%al
081e003f +0x065:  jle    081e006a <+0x90>
081e0041 +0x067:  movl   $0x0,0xc(%esp)
081e0049 +0x06f:  movl   $0x0,0x8(%esp)
081e0051 +0x077:  movl   $&_ZZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e0059 +0x07f:  movl   $0x5300,(%esp)
081e0060 +0x086:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e0065 +0x08b:  jmp    081e00ed <+0x113>
081e006a +0x090:  mov    -0xc(%ebp),%eax
081e006d +0x093:  add    $0xe,%eax
081e0070 +0x096:  mov    %eax,0x4(%esp)
081e0074 +0x09a:  mov    0xc(%ebp),%eax
081e0077 +0x09d:  mov    %eax,(%esp)
081e007a +0x0a0:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e007f +0x0a5:  xor    $0x1,%eax
081e0082 +0x0a8:  test   %al,%al
081e0084 +0x0aa:  je     081e00ac <+0xd2>
081e0086 +0x0ac:  movl   $0x0,0xc(%esp)
081e008e +0x0b4:  movl   $0x0,0x8(%esp)
081e0096 +0x0bc:  movl   $&_ZZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e009e +0x0c4:  movl   $0x5303,(%esp)
081e00a5 +0x0cb:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e00aa +0x0d0:  jmp    081e00ed <+0x113>
081e00ac +0x0d2:  mov    -0xc(%ebp),%eax
081e00af +0x0d5:  movzbl 0xe(%eax),%eax
081e00b3 +0x0d9:  test   %al,%al
081e00b5 +0x0db:  js     081e00c2 <+0xe8>
081e00b7 +0x0dd:  mov    -0xc(%ebp),%eax
081e00ba +0x0e0:  movzbl 0xe(%eax),%eax
081e00be +0x0e4:  cmp    $0x1,%al
081e00c0 +0x0e6:  jle    081e00e8 <+0x10e>
081e00c2 +0x0e8:  movl   $0x0,0xc(%esp)
081e00ca +0x0f0:  movl   $0x0,0x8(%esp)
081e00d2 +0x0f8:  movl   $&_ZZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e00da +0x100:  movl   $0x5306,(%esp)
081e00e1 +0x107:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e00e6 +0x10c:  jmp    081e00ed <+0x113>
081e00e8 +0x10e:  mov    $0x0,%eax
081e00ed +0x113:  leave
081e00ee +0x114:  ret
081e00ef +0x115:  nop
```

## 反编译 C

```c
// Dispatcher_TournamentRewardSelect::read @ 0x81dffda

/* Dispatcher_TournamentRewardSelect::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_TournamentRewardSelect::read
          (Dispatcher_TournamentRewardSelect *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    if (((char)param_2[0xd] < '\0') || ('\x01' < (char)param_2[0xd])) {
      uVar2 = LineFunc(0x5300,
                       "virtual int Dispatcher_TournamentRewardSelect::read(PacketBuf&, MSG_BASE&)",
                       0,0);
    }
    else {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
      if (cVar1 == '\x01') {
        if (((char)param_2[0xe] < '\0') || ('\x01' < (char)param_2[0xe])) {
          uVar2 = LineFunc(0x5306,
                           "virtual int Dispatcher_TournamentRewardSelect::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = LineFunc(0x5303,
                         "virtual int Dispatcher_TournamentRewardSelect::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
  }
  else {
    uVar2 = LineFunc(0x52fd,
                     "virtual int Dispatcher_TournamentRewardSelect::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}
```
