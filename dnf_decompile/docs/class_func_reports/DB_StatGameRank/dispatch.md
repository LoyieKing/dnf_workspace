# dispatch

`_ZN15DB_StatGameRank8dispatchEiiP6Stream`

`DB_StatGameRank::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_StatGameRank` | `0x08417dd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417dd0  _ZN15DB_StatGameRank8dispatchEiiP6Stream
#           DB_StatGameRank::dispatch(int, int, Stream*)
# range [0x08417dd0, 0x08417e4d]
08417dd0 +0x00:  push   %ebp
08417dd1 +0x01:  mov    %esp,%ebp
08417dd3 +0x03:  sub    $0x28,%esp
08417dd6 +0x06:  mov    0x8(%ebp),%eax
08417dd9 +0x09:  mov    0x14(%ebp),%edx
08417ddc +0x0c:  mov    %edx,0xc(%esp)
08417de0 +0x10:  mov    0x10(%ebp),%edx
08417de3 +0x13:  mov    %edx,0x8(%esp)
08417de7 +0x17:  mov    0xc(%ebp),%edx
08417dea +0x1a:  mov    %edx,0x4(%esp)
08417dee +0x1e:  mov    %eax,(%esp)
08417df1 +0x21:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08417df6 +0x26:  xor    $0x1,%eax
08417df9 +0x29:  test   %al,%al
08417dfb +0x2b:  je     08417e04 <+0x34>
08417dfd +0x2d:  mov    $0x0,%eax
08417e02 +0x32:  jmp    08417e4b <+0x7b>
08417e04 +0x34:  mov    0x14(%ebp),%eax
08417e07 +0x37:  mov    %eax,(%esp)
08417e0a +0x3a:  call   08450cd4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x38ea>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x38ea
08417e0f +0x3f:  mov    %eax,-0xc(%ebp)
08417e12 +0x42:  cmpl   $0x0,-0xc(%ebp)
08417e16 +0x46:  jne    08417e1f <+0x4f>
08417e18 +0x48:  mov    $0x0,%eax
08417e1d +0x4d:  jmp    08417e4b <+0x7b>
08417e1f +0x4f:  mov    -0xc(%ebp),%eax
08417e22 +0x52:  mov    %eax,0x4(%esp)
08417e26 +0x56:  mov    0x8(%ebp),%eax
08417e29 +0x59:  mov    %eax,(%esp)
08417e2c +0x5c:  call   08417e4e <_ZN15DB_StatGameRank8LogWriteEP16MSG_STAT_RANKRES>  ; DB_StatGameRank::LogWrite(MSG_STAT_RANKRES*)
08417e31 +0x61:  mov    %al,-0xd(%ebp)
08417e34 +0x64:  movzbl -0xd(%ebp),%eax
08417e38 +0x68:  xor    $0x1,%eax
08417e3b +0x6b:  test   %al,%al
08417e3d +0x6d:  je     08417e46 <+0x76>
08417e3f +0x6f:  mov    $0x0,%eax
08417e44 +0x74:  jmp    08417e4b <+0x7b>
08417e46 +0x76:  mov    $0x1,%eax
08417e4b +0x7b:  leave
08417e4c +0x7c:  ret
08417e4d +0x7d:  nop
```

## 反编译 C

```c
// DB_StatGameRank::dispatch @ 0x8417dd0

/* DB_StatGameRank::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_StatGameRank::dispatch(DB_StatGameRank *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  MSG_STAT_RANKRES *pMVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pMVar3 = Stream::GetOutBuffer<MSG_STAT_RANKRES>(param_3);
    if (pMVar3 == (MSG_STAT_RANKRES *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = LogWrite((MSG_STAT_RANKRES *)this);
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
