# dispatch

`_ZN8APSystem18DB_LoadRewardMedal8dispatchEiiP6Stream`

`APSystem::DB_LoadRewardMedal::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_LoadRewardMedal` | `0x08124882` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08124882  _ZN8APSystem18DB_LoadRewardMedal8dispatchEiiP6Stream
#           APSystem::DB_LoadRewardMedal::dispatch(int, int, Stream*)
# range [0x08124882, 0x0812490f]
08124882 +0x00:  push   %ebp
08124883 +0x01:  mov    %esp,%ebp
08124885 +0x03:  sub    $0x28,%esp
08124888 +0x06:  mov    0x8(%ebp),%eax
0812488b +0x09:  mov    0x14(%ebp),%edx
0812488e +0x0c:  mov    %edx,0xc(%esp)
08124892 +0x10:  mov    0x10(%ebp),%edx
08124895 +0x13:  mov    %edx,0x8(%esp)
08124899 +0x17:  mov    0xc(%ebp),%edx
0812489c +0x1a:  mov    %edx,0x4(%esp)
081248a0 +0x1e:  mov    %eax,(%esp)
081248a3 +0x21:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
081248a8 +0x26:  xor    $0x1,%eax
081248ab +0x29:  test   %al,%al
081248ad +0x2b:  je     081248b6 <+0x34>
081248af +0x2d:  mov    $0x0,%eax
081248b4 +0x32:  jmp    0812490e <+0x8c>
081248b6 +0x34:  mov    0x14(%ebp),%eax
081248b9 +0x37:  mov    %eax,(%esp)
081248bc +0x3a:  call   08125738 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x49b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x49b
081248c1 +0x3f:  mov    %eax,-0xc(%ebp)
081248c4 +0x42:  cmpl   $0x0,-0xc(%ebp)
081248c8 +0x46:  jne    081248d1 <+0x4f>
081248ca +0x48:  mov    $0x0,%eax
081248cf +0x4d:  jmp    0812490e <+0x8c>
081248d1 +0x4f:  mov    -0xc(%ebp),%eax
081248d4 +0x52:  mov    %eax,0x4(%esp)
081248d8 +0x56:  mov    0x8(%ebp),%eax
081248db +0x59:  mov    %eax,(%esp)
081248de +0x5c:  call   08124910 <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE>  ; APSystem::DB_LoadRewardMedal::Select(APSystem::_SIG_LOAD_REWARD_MEDAL&)
081248e3 +0x61:  test   %al,%al
081248e5 +0x63:  je     08124909 <+0x87>
081248e7 +0x65:  mov    -0xc(%ebp),%eax
081248ea +0x68:  mov    %eax,0xc(%esp)
081248ee +0x6c:  mov    0x10(%ebp),%eax
081248f1 +0x6f:  mov    %eax,0x8(%esp)
081248f5 +0x73:  mov    0xc(%ebp),%eax
081248f8 +0x76:  mov    %eax,0x4(%esp)
081248fc +0x7a:  mov    0x8(%ebp),%eax
081248ff +0x7d:  mov    %eax,(%esp)
08124902 +0x80:  call   08124b8e <_ZN8APSystem18DB_LoadRewardMedal10SendResultEiiRNS_22_SIG_LOAD_REWARD_MEDALE>  ; APSystem::DB_LoadRewardMedal::SendResult(int, int, APSystem::_SIG_LOAD_REWARD_MEDAL&)
08124907 +0x85:  jmp    0812490e <+0x8c>
08124909 +0x87:  mov    $0x0,%eax
0812490e +0x8c:  leave
0812490f +0x8d:  ret
```

## 反编译 C

```c
// APSystem::DB_LoadRewardMedal::dispatch @ 0x8124882

/* APSystem::DB_LoadRewardMedal::dispatch(int, int, Stream*) */

undefined4 __thiscall
APSystem::DB_LoadRewardMedal::dispatch
          (DB_LoadRewardMedal *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  _SIG_LOAD_REWARD_MEDAL *p_Var3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    p_Var3 = Stream::GetOutBuffer<APSystem::_SIG_LOAD_REWARD_MEDAL>(param_3);
    if (p_Var3 == (_SIG_LOAD_REWARD_MEDAL *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = Select(this,p_Var3);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = SendResult(this,param_1,param_2,p_Var3);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
