# dispatch

`_ZN8APSystem20DB_UpdateRewardMedal8dispatchEiiP6Stream`

`APSystem::DB_UpdateRewardMedal::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_UpdateRewardMedal` | `0x08124c78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08124c78  _ZN8APSystem20DB_UpdateRewardMedal8dispatchEiiP6Stream
#           APSystem::DB_UpdateRewardMedal::dispatch(int, int, Stream*)
# range [0x08124c78, 0x08124cb1]
08124c78 +0x00:  push   %ebp
08124c79 +0x01:  mov    %esp,%ebp
08124c7b +0x03:  sub    $0x28,%esp
08124c7e +0x06:  mov    0x14(%ebp),%eax
08124c81 +0x09:  mov    %eax,(%esp)
08124c84 +0x0c:  call   081257c6 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x529>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x529
08124c89 +0x11:  mov    %eax,-0xc(%ebp)
08124c8c +0x14:  cmpl   $0x0,-0xc(%ebp)
08124c90 +0x18:  jne    08124c99 <+0x21>
08124c92 +0x1a:  mov    $0x0,%eax
08124c97 +0x1f:  jmp    08124cb0 <+0x38>
08124c99 +0x21:  mov    -0xc(%ebp),%eax
08124c9c +0x24:  mov    %eax,0x4(%esp)
08124ca0 +0x28:  mov    0x8(%ebp),%eax
08124ca3 +0x2b:  mov    %eax,(%esp)
08124ca6 +0x2e:  call   08124cb2 <_ZN8APSystem20DB_UpdateRewardMedal6UpdateERNS_24_SIG_UPDATE_REWARD_MEDALE>  ; APSystem::DB_UpdateRewardMedal::Update(APSystem::_SIG_UPDATE_REWARD_MEDAL&)
08124cab +0x33:  mov    $0x1,%eax
08124cb0 +0x38:  leave
08124cb1 +0x39:  ret
```

## 反编译 C

```c
// APSystem::DB_UpdateRewardMedal::dispatch @ 0x8124c78

/* APSystem::DB_UpdateRewardMedal::dispatch(int, int, Stream*) */

bool __thiscall
APSystem::DB_UpdateRewardMedal::dispatch
          (DB_UpdateRewardMedal *this,int param_1,int param_2,Stream *param_3)

{
  _SIG_UPDATE_REWARD_MEDAL *p_Var1;
  
  p_Var1 = Stream::GetOutBuffer<APSystem::_SIG_UPDATE_REWARD_MEDAL>(param_3);
  if (p_Var1 != (_SIG_UPDATE_REWARD_MEDAL *)0x0) {
    Update(this,p_Var1);
  }
  return p_Var1 != (_SIG_UPDATE_REWARD_MEDAL *)0x0;
}
```
