# DoConnectP2P

`_ZN11pvp_assault13CAssaultPlace12DoConnectP2PEv`

`pvp_assault::CAssaultPlace::DoConnectP2P()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e91fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e91fa  _ZN11pvp_assault13CAssaultPlace12DoConnectP2PEv
#           pvp_assault::CAssaultPlace::DoConnectP2P()
# range [0x082e91fa, 0x082e927d]
082e91fa +0x00:  push   %ebp
082e91fb +0x01:  mov    %esp,%ebp
082e91fd +0x03:  sub    $0x28,%esp
082e9200 +0x06:  mov    0x8(%ebp),%eax
082e9203 +0x09:  movl   $0x3,0x10c(%eax)
082e920d +0x13:  movl   $0x0,-0xc(%ebp)
082e9214 +0x1a:  jmp    082e924b <+0x51>
082e9216 +0x1c:  mov    -0xc(%ebp),%eax
082e9219 +0x1f:  shl    $0x5,%eax
082e921c +0x22:  add    0x8(%ebp),%eax
082e921f +0x25:  mov    %eax,(%esp)
082e9222 +0x28:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e9227 +0x2d:  test   %al,%al
082e9229 +0x2f:  jne    082e9246 <+0x4c>
082e922b +0x31:  mov    -0xc(%ebp),%eax
082e922e +0x34:  shl    $0x5,%eax
082e9231 +0x37:  add    0x8(%ebp),%eax
082e9234 +0x3a:  movl   $0x3,0x4(%esp)
082e923c +0x42:  mov    %eax,(%esp)
082e923f +0x45:  call   082f057c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x300>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x300
082e9244 +0x4a:  jmp    082e9247 <+0x4d>
082e9246 +0x4c:  nop
082e9247 +0x4d:  addl   $0x1,-0xc(%ebp)
082e924b +0x51:  cmpl   $0x7,-0xc(%ebp)
082e924f +0x55:  setle  %al
082e9252 +0x58:  test   %al,%al
082e9254 +0x5a:  jne    082e9216 <+0x1c>
082e9256 +0x5c:  mov    0x8(%ebp),%eax
082e9259 +0x5f:  mov    0x108(%eax),%edx
082e925f +0x65:  mov    0x8(%ebp),%eax
082e9262 +0x68:  mov    0x104(%eax),%eax
082e9268 +0x6e:  mov    %edx,0x8(%esp)
082e926c +0x72:  mov    %eax,0x4(%esp)
082e9270 +0x76:  movl   $0xf,(%esp)
082e9277 +0x7d:  call   086375ca <_ZN29TimerConnectP2PAssaultTimeout15registNextTimerElii>  ; TimerConnectP2PAssaultTimeout::registNextTimer(long, int, int)
082e927c +0x82:  leave
082e927d +0x83:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::DoConnectP2P @ 0x82e91fa

/* pvp_assault::CAssaultPlace::DoConnectP2P() */

void __thiscall pvp_assault::CAssaultPlace::DoConnectP2P(CAssaultPlace *this)

{
  char cVar1;
  int local_10;
  
  *(undefined4 *)(this + 0x10c) = 3;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      CAssaulter::SetState((CAssaulter *)(this + local_10 * 0x20),3);
    }
  }
  TimerConnectP2PAssaultTimeout::registNextTimer(0xf,*(int *)(this + 0x104),*(int *)(this + 0x108));
  return;
}
```
