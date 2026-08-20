# onTryGenerateRandomItem

`_ZN8WongWork17CItemGeneratorMgr23onTryGenerateRandomItemENS0_15eGenerateType_tENS_15eItemDropType_tE11ENUM_RARITY`

`WongWork::CItemGeneratorMgr::onTryGenerateRandomItem(WongWork::CItemGeneratorMgr::eGenerateType_t, WongWork::eItemDropType_t, ENUM_RARITY)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemGeneratorMgr` | `0x085342c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085342c6  _ZN8WongWork17CItemGeneratorMgr23onTryGenerateRandomItemENS0_15eGenerateType_tENS_15eItemDropType_tE11ENUM_RARITY
#           WongWork::CItemGeneratorMgr::onTryGenerateRandomItem(WongWork::CItemGeneratorMgr::eGenerateType_t, WongWork::eItemDropType_t, ENUM_RARITY)
# range [0x085342c6, 0x08534321]
085342c6 +0x00:  push   %ebp
085342c7 +0x01:  mov    %esp,%ebp
085342c9 +0x03:  push   %edi
085342ca +0x04:  push   %esi
085342cb +0x05:  push   %ebx
085342cc +0x06:  sub    $0x4,%esp
085342cf +0x09:  mov    0xc(%ebp),%eax
085342d2 +0x0c:  mov    %eax,-0x10(%ebp)
085342d5 +0x0f:  mov    0x10(%ebp),%ecx
085342d8 +0x12:  mov    0x14(%ebp),%edi
085342db +0x15:  mov    0x8(%ebp),%esi
085342de +0x18:  mov    %ecx,%eax
085342e0 +0x1a:  add    %eax,%eax
085342e2 +0x1c:  add    %ecx,%eax
085342e4 +0x1e:  add    %eax,%eax
085342e6 +0x20:  mov    -0x10(%ebp),%edx
085342e9 +0x23:  add    %edx,%edx
085342eb +0x25:  mov    %edx,%ebx
085342ed +0x27:  shl    $0x4,%ebx
085342f0 +0x2a:  sub    %edx,%ebx
085342f2 +0x2c:  add    %ebx,%eax
085342f4 +0x2e:  add    %edi,%eax
085342f6 +0x30:  mov    (%esi,%eax,4),%eax
085342f9 +0x33:  lea    0x1(%eax),%esi
085342fc +0x36:  mov    0x8(%ebp),%ebx
085342ff +0x39:  mov    %ecx,%eax
08534301 +0x3b:  add    %eax,%eax
08534303 +0x3d:  add    %ecx,%eax
08534305 +0x3f:  add    %eax,%eax
08534307 +0x41:  mov    -0x10(%ebp),%edx
0853430a +0x44:  add    %edx,%edx
0853430c +0x46:  mov    %edx,%ecx
0853430e +0x48:  shl    $0x4,%ecx
08534311 +0x4b:  sub    %edx,%ecx
08534313 +0x4d:  add    %ecx,%eax
08534315 +0x4f:  add    %edi,%eax
08534317 +0x51:  mov    %esi,(%ebx,%eax,4)
0853431a +0x54:  add    $0x4,%esp
0853431d +0x57:  pop    %ebx
0853431e +0x58:  pop    %esi
0853431f +0x59:  pop    %edi
08534320 +0x5a:  pop    %ebp
08534321 +0x5b:  ret
```

## 反编译 C

```c
// WongWork::CItemGeneratorMgr::onTryGenerateRandomItem @ 0x85342c6

/* WongWork::CItemGeneratorMgr::onTryGenerateRandomItem(WongWork::CItemGeneratorMgr::eGenerateType_t,
   WongWork::eItemDropType_t, ENUM_RARITY) */

void __thiscall
WongWork::CItemGeneratorMgr::onTryGenerateRandomItem
          (CItemGeneratorMgr *this,int param_2,int param_3,int param_4)

{
  *(int *)(this + (param_3 * 6 + param_2 * 0x1e) * 4 + param_4 * 4) =
       *(int *)(this + (param_3 * 6 + param_2 * 0x1e) * 4 + param_4 * 4) + 1;
  return;
}
```
