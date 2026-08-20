# GetQuestItemDropRate

`_ZN10expert_job10CAlchemist20GetQuestItemDropRateEP5CUseri`

`expert_job::CAlchemist::GetQuestItemDropRate(CUser*, int)`

| 类 | 地址 |
|---|---|
| `expert_job::CAlchemist` | `0x085d12ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d12ee  _ZN10expert_job10CAlchemist20GetQuestItemDropRateEP5CUseri
#           expert_job::CAlchemist::GetQuestItemDropRate(CUser*, int)
# range [0x085d12ee, 0x085d135f]
085d12ee +0x00:  push   %ebp
085d12ef +0x01:  mov    %esp,%ebp
085d12f1 +0x03:  sub    $0x18,%esp
085d12f4 +0x06:  movl   $0x27ac52,0x4(%esp)
085d12fc +0x0e:  mov    0x8(%ebp),%eax
085d12ff +0x11:  mov    %eax,(%esp)
085d1302 +0x14:  call   085d121e <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri>  ; expert_job::CAlchemist::IsExistContinuousEffectItem(CUser*, int)
085d1307 +0x19:  test   %al,%al
085d1309 +0x1b:  jne    085d1322 <+0x34>
085d130b +0x1d:  movl   $0x1f8e,0x4(%esp)
085d1313 +0x25:  mov    0x8(%ebp),%eax
085d1316 +0x28:  mov    %eax,(%esp)
085d1319 +0x2b:  call   085d121e <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri>  ; expert_job::CAlchemist::IsExistContinuousEffectItem(CUser*, int)
085d131e +0x30:  test   %al,%al
085d1320 +0x32:  je     085d1329 <+0x3b>
085d1322 +0x34:  mov    $0x1,%eax
085d1327 +0x39:  jmp    085d132e <+0x40>
085d1329 +0x3b:  mov    $0x0,%eax
085d132e +0x40:  test   %al,%al
085d1330 +0x42:  je     085d135b <+0x6d>
085d1332 +0x44:  mov    &g_alchemistInfo+0x4,%eax
085d1337 +0x49:  add    $0x2710,%eax
085d133c +0x4e:  mov    %eax,%ecx
085d133e +0x50:  imul   0xc(%ebp),%ecx
085d1342 +0x54:  mov    $0x68db8bad,%edx
085d1347 +0x59:  mov    %ecx,%eax
085d1349 +0x5b:  imul   %edx
085d134b +0x5d:  sar    $0xc,%edx
085d134e +0x60:  mov    %ecx,%eax
085d1350 +0x62:  sar    $0x1f,%eax
085d1353 +0x65:  mov    %edx,%ecx
085d1355 +0x67:  sub    %eax,%ecx
085d1357 +0x69:  mov    %ecx,%eax
085d1359 +0x6b:  jmp    085d135e <+0x70>
085d135b +0x6d:  mov    0xc(%ebp),%eax
085d135e +0x70:  leave
085d135f +0x71:  ret
```

## 反编译 C

```c
// expert_job::CAlchemist::GetQuestItemDropRate @ 0x85d12ee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* expert_job::CAlchemist::GetQuestItemDropRate(CUser*, int) */

int expert_job::CAlchemist::GetQuestItemDropRate(CUser *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = IsExistContinuousEffectItem(param_1,0x27ac52);
  if ((cVar2 == '\0') && (cVar2 = IsExistContinuousEffectItem(param_1,0x1f8e), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    param_2 = ((_DAT_094f777c + 10000) * param_2) / 10000;
  }
  return param_2;
}
```
