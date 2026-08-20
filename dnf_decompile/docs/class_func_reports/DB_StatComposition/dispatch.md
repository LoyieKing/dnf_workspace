# dispatch

`_ZN18DB_StatComposition8dispatchEiiP6Stream`

`DB_StatComposition::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_StatComposition` | `0x08417bec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417bec  _ZN18DB_StatComposition8dispatchEiiP6Stream
#           DB_StatComposition::dispatch(int, int, Stream*)
# range [0x08417bec, 0x08417c69]
08417bec +0x00:  push   %ebp
08417bed +0x01:  mov    %esp,%ebp
08417bef +0x03:  sub    $0x28,%esp
08417bf2 +0x06:  mov    0x8(%ebp),%eax
08417bf5 +0x09:  mov    0x14(%ebp),%edx
08417bf8 +0x0c:  mov    %edx,0xc(%esp)
08417bfc +0x10:  mov    0x10(%ebp),%edx
08417bff +0x13:  mov    %edx,0x8(%esp)
08417c03 +0x17:  mov    0xc(%ebp),%edx
08417c06 +0x1a:  mov    %edx,0x4(%esp)
08417c0a +0x1e:  mov    %eax,(%esp)
08417c0d +0x21:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08417c12 +0x26:  xor    $0x1,%eax
08417c15 +0x29:  test   %al,%al
08417c17 +0x2b:  je     08417c20 <+0x34>
08417c19 +0x2d:  mov    $0x0,%eax
08417c1e +0x32:  jmp    08417c67 <+0x7b>
08417c20 +0x34:  mov    0x14(%ebp),%eax
08417c23 +0x37:  mov    %eax,(%esp)
08417c26 +0x3a:  call   08450c2c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3842>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3842
08417c2b +0x3f:  mov    %eax,-0xc(%ebp)
08417c2e +0x42:  cmpl   $0x0,-0xc(%ebp)
08417c32 +0x46:  jne    08417c3b <+0x4f>
08417c34 +0x48:  mov    $0x0,%eax
08417c39 +0x4d:  jmp    08417c67 <+0x7b>
08417c3b +0x4f:  mov    -0xc(%ebp),%eax
08417c3e +0x52:  mov    %eax,0x4(%esp)
08417c42 +0x56:  mov    0x8(%ebp),%eax
08417c45 +0x59:  mov    %eax,(%esp)
08417c48 +0x5c:  call   08417c6a <_ZN18DB_StatComposition8LogWriteEP19MSG_STAT_COMPOSITON>  ; DB_StatComposition::LogWrite(MSG_STAT_COMPOSITON*)
08417c4d +0x61:  mov    %al,-0xd(%ebp)
08417c50 +0x64:  movzbl -0xd(%ebp),%eax
08417c54 +0x68:  xor    $0x1,%eax
08417c57 +0x6b:  test   %al,%al
08417c59 +0x6d:  je     08417c62 <+0x76>
08417c5b +0x6f:  mov    $0x0,%eax
08417c60 +0x74:  jmp    08417c67 <+0x7b>
08417c62 +0x76:  mov    $0x1,%eax
08417c67 +0x7b:  leave
08417c68 +0x7c:  ret
08417c69 +0x7d:  nop
```

## 反编译 C

```c
// DB_StatComposition::dispatch @ 0x8417bec

/* DB_StatComposition::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_StatComposition::dispatch(DB_StatComposition *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  MSG_STAT_COMPOSITON *pMVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pMVar3 = Stream::GetOutBuffer<MSG_STAT_COMPOSITON>(param_3);
    if (pMVar3 == (MSG_STAT_COMPOSITON *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = LogWrite((MSG_STAT_COMPOSITON *)this);
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
