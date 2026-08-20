# dispatch

`_ZN14DB_StatPvpPlay8dispatchEiiP6Stream`

`DB_StatPvpPlay::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_StatPvpPlay` | `0x08417ec2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417ec2  _ZN14DB_StatPvpPlay8dispatchEiiP6Stream
#           DB_StatPvpPlay::dispatch(int, int, Stream*)
# range [0x08417ec2, 0x08417f3f]
08417ec2 +0x00:  push   %ebp
08417ec3 +0x01:  mov    %esp,%ebp
08417ec5 +0x03:  sub    $0x28,%esp
08417ec8 +0x06:  mov    0x8(%ebp),%eax
08417ecb +0x09:  mov    0x14(%ebp),%edx
08417ece +0x0c:  mov    %edx,0xc(%esp)
08417ed2 +0x10:  mov    0x10(%ebp),%edx
08417ed5 +0x13:  mov    %edx,0x8(%esp)
08417ed9 +0x17:  mov    0xc(%ebp),%edx
08417edc +0x1a:  mov    %edx,0x4(%esp)
08417ee0 +0x1e:  mov    %eax,(%esp)
08417ee3 +0x21:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08417ee8 +0x26:  xor    $0x1,%eax
08417eeb +0x29:  test   %al,%al
08417eed +0x2b:  je     08417ef6 <+0x34>
08417eef +0x2d:  mov    $0x0,%eax
08417ef4 +0x32:  jmp    08417f3d <+0x7b>
08417ef6 +0x34:  mov    0x14(%ebp),%eax
08417ef9 +0x37:  mov    %eax,(%esp)
08417efc +0x3a:  call   08450d28 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x393e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x393e
08417f01 +0x3f:  mov    %eax,-0xc(%ebp)
08417f04 +0x42:  cmpl   $0x0,-0xc(%ebp)
08417f08 +0x46:  jne    08417f11 <+0x4f>
08417f0a +0x48:  mov    $0x0,%eax
08417f0f +0x4d:  jmp    08417f3d <+0x7b>
08417f11 +0x4f:  mov    -0xc(%ebp),%eax
08417f14 +0x52:  mov    %eax,0x4(%esp)
08417f18 +0x56:  mov    0x8(%ebp),%eax
08417f1b +0x59:  mov    %eax,(%esp)
08417f1e +0x5c:  call   08417f40 <_ZN14DB_StatPvpPlay8LogWriteEP16MSG_STAT_PVPPLAY>  ; DB_StatPvpPlay::LogWrite(MSG_STAT_PVPPLAY*)
08417f23 +0x61:  mov    %al,-0xd(%ebp)
08417f26 +0x64:  movzbl -0xd(%ebp),%eax
08417f2a +0x68:  xor    $0x1,%eax
08417f2d +0x6b:  test   %al,%al
08417f2f +0x6d:  je     08417f38 <+0x76>
08417f31 +0x6f:  mov    $0x0,%eax
08417f36 +0x74:  jmp    08417f3d <+0x7b>
08417f38 +0x76:  mov    $0x1,%eax
08417f3d +0x7b:  leave
08417f3e +0x7c:  ret
08417f3f +0x7d:  nop
```

## 反编译 C

```c
// DB_StatPvpPlay::dispatch @ 0x8417ec2

/* DB_StatPvpPlay::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_StatPvpPlay::dispatch(DB_StatPvpPlay *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  MSG_STAT_PVPPLAY *pMVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pMVar3 = Stream::GetOutBuffer<MSG_STAT_PVPPLAY>(param_3);
    if (pMVar3 == (MSG_STAT_PVPPLAY *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = LogWrite((MSG_STAT_PVPPLAY *)this);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
