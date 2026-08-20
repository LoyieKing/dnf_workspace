# dispatch

`_ZN19DB_StatDungeonClear8dispatchEiiP6Stream`

`DB_StatDungeonClear::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_StatDungeonClear` | `0x08417cde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417cde  _ZN19DB_StatDungeonClear8dispatchEiiP6Stream
#           DB_StatDungeonClear::dispatch(int, int, Stream*)
# range [0x08417cde, 0x08417d5b]
08417cde +0x00:  push   %ebp
08417cdf +0x01:  mov    %esp,%ebp
08417ce1 +0x03:  sub    $0x28,%esp
08417ce4 +0x06:  mov    0x8(%ebp),%eax
08417ce7 +0x09:  mov    0x14(%ebp),%edx
08417cea +0x0c:  mov    %edx,0xc(%esp)
08417cee +0x10:  mov    0x10(%ebp),%edx
08417cf1 +0x13:  mov    %edx,0x8(%esp)
08417cf5 +0x17:  mov    0xc(%ebp),%edx
08417cf8 +0x1a:  mov    %edx,0x4(%esp)
08417cfc +0x1e:  mov    %eax,(%esp)
08417cff +0x21:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08417d04 +0x26:  xor    $0x1,%eax
08417d07 +0x29:  test   %al,%al
08417d09 +0x2b:  je     08417d12 <+0x34>
08417d0b +0x2d:  mov    $0x0,%eax
08417d10 +0x32:  jmp    08417d59 <+0x7b>
08417d12 +0x34:  mov    0x14(%ebp),%eax
08417d15 +0x37:  mov    %eax,(%esp)
08417d18 +0x3a:  call   08450c80 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3896>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3896
08417d1d +0x3f:  mov    %eax,-0xc(%ebp)
08417d20 +0x42:  cmpl   $0x0,-0xc(%ebp)
08417d24 +0x46:  jne    08417d2d <+0x4f>
08417d26 +0x48:  mov    $0x0,%eax
08417d2b +0x4d:  jmp    08417d59 <+0x7b>
08417d2d +0x4f:  mov    -0xc(%ebp),%eax
08417d30 +0x52:  mov    %eax,0x4(%esp)
08417d34 +0x56:  mov    0x8(%ebp),%eax
08417d37 +0x59:  mov    %eax,(%esp)
08417d3a +0x5c:  call   08417d5c <_ZN19DB_StatDungeonClear8LogWriteEP21MSG_STAT_DUNGEONCLEAR>  ; DB_StatDungeonClear::LogWrite(MSG_STAT_DUNGEONCLEAR*)
08417d3f +0x61:  mov    %al,-0xd(%ebp)
08417d42 +0x64:  movzbl -0xd(%ebp),%eax
08417d46 +0x68:  xor    $0x1,%eax
08417d49 +0x6b:  test   %al,%al
08417d4b +0x6d:  je     08417d54 <+0x76>
08417d4d +0x6f:  mov    $0x0,%eax
08417d52 +0x74:  jmp    08417d59 <+0x7b>
08417d54 +0x76:  mov    $0x1,%eax
08417d59 +0x7b:  leave
08417d5a +0x7c:  ret
08417d5b +0x7d:  nop
```

## 反编译 C

```c
// DB_StatDungeonClear::dispatch @ 0x8417cde

/* DB_StatDungeonClear::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_StatDungeonClear::dispatch(DB_StatDungeonClear *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  MSG_STAT_DUNGEONCLEAR *pMVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pMVar3 = Stream::GetOutBuffer<MSG_STAT_DUNGEONCLEAR>(param_3);
    if (pMVar3 == (MSG_STAT_DUNGEONCLEAR *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = LogWrite((MSG_STAT_DUNGEONCLEAR *)this);
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
