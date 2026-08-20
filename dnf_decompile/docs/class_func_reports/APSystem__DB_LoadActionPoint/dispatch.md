# dispatch

`_ZN8APSystem18DB_LoadActionPoint8dispatchEiiP6Stream`

`APSystem::DB_LoadActionPoint::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_LoadActionPoint` | `0x08123b10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08123b10  _ZN8APSystem18DB_LoadActionPoint8dispatchEiiP6Stream
#           APSystem::DB_LoadActionPoint::dispatch(int, int, Stream*)
# range [0x08123b10, 0x08123b9d]
08123b10 +0x00:  push   %ebp
08123b11 +0x01:  mov    %esp,%ebp
08123b13 +0x03:  sub    $0x38,%esp
08123b16 +0x06:  mov    0x8(%ebp),%eax
08123b19 +0x09:  mov    0x14(%ebp),%edx
08123b1c +0x0c:  mov    %edx,0xc(%esp)
08123b20 +0x10:  mov    0x10(%ebp),%edx
08123b23 +0x13:  mov    %edx,0x8(%esp)
08123b27 +0x17:  mov    0xc(%ebp),%edx
08123b2a +0x1a:  mov    %edx,0x4(%esp)
08123b2e +0x1e:  mov    %eax,(%esp)
08123b31 +0x21:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08123b36 +0x26:  xor    $0x1,%eax
08123b39 +0x29:  test   %al,%al
08123b3b +0x2b:  je     08123b44 <+0x34>
08123b3d +0x2d:  mov    $0x0,%eax
08123b42 +0x32:  jmp    08123b9c <+0x8c>
08123b44 +0x34:  mov    0x14(%ebp),%eax
08123b47 +0x37:  mov    %eax,(%esp)
08123b4a +0x3a:  call   081256e4 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x447>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x447
08123b4f +0x3f:  mov    %eax,-0x10(%ebp)
08123b52 +0x42:  cmpl   $0x0,-0x10(%ebp)
08123b56 +0x46:  jne    08123b5f <+0x4f>
08123b58 +0x48:  mov    $0x0,%eax
08123b5d +0x4d:  jmp    08123b9c <+0x8c>
08123b5f +0x4f:  mov    -0x10(%ebp),%eax
08123b62 +0x52:  mov    %eax,0x4(%esp)
08123b66 +0x56:  mov    0x8(%ebp),%eax
08123b69 +0x59:  mov    %eax,(%esp)
08123b6c +0x5c:  call   08123b9e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE>  ; APSystem::DB_LoadActionPoint::Select(APSystem::_SIG_LOAD_ACTION_POINT&)
08123b71 +0x61:  mov    %al,-0x9(%ebp)
08123b74 +0x64:  movzbl -0x9(%ebp),%eax
08123b78 +0x68:  mov    %eax,0x10(%esp)
08123b7c +0x6c:  mov    -0x10(%ebp),%eax
08123b7f +0x6f:  mov    %eax,0xc(%esp)
08123b83 +0x73:  mov    0x10(%ebp),%eax
08123b86 +0x76:  mov    %eax,0x8(%esp)
08123b8a +0x7a:  mov    0xc(%ebp),%eax
08123b8d +0x7d:  mov    %eax,0x4(%esp)
08123b91 +0x81:  mov    0x8(%ebp),%eax
08123b94 +0x84:  mov    %eax,(%esp)
08123b97 +0x87:  call   08124156 <_ZN8APSystem18DB_LoadActionPoint10SendResultEiiRNS_22_SIG_LOAD_ACTION_POINTEb>  ; APSystem::DB_LoadActionPoint::SendResult(int, int, APSystem::_SIG_LOAD_ACTION_POINT&, bool)
08123b9c +0x8c:  leave
08123b9d +0x8d:  ret
```

## 反编译 C

```c
// APSystem::DB_LoadActionPoint::dispatch @ 0x8123b10

/* APSystem::DB_LoadActionPoint::dispatch(int, int, Stream*) */

undefined4 __thiscall
APSystem::DB_LoadActionPoint::dispatch
          (DB_LoadActionPoint *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  _SIG_LOAD_ACTION_POINT *p_Var4;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    p_Var4 = Stream::GetOutBuffer<APSystem::_SIG_LOAD_ACTION_POINT>(param_3);
    if (p_Var4 == (_SIG_LOAD_ACTION_POINT *)0x0) {
      uVar3 = 0;
    }
    else {
      bVar2 = (bool)Select(this,p_Var4);
      uVar3 = SendResult(this,param_1,param_2,p_Var4,bVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
