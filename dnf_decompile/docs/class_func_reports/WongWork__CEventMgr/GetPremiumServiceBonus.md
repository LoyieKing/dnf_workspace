# GetPremiumServiceBonus

`_ZN8WongWork9CEventMgr22GetPremiumServiceBonusEv`

`WongWork::CEventMgr::GetPremiumServiceBonus()`

| 类 | 地址 |
|---|---|
| `WongWork::CEventMgr` | `0x0848f078` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f078  _ZN8WongWork9CEventMgr22GetPremiumServiceBonusEv
#           WongWork::CEventMgr::GetPremiumServiceBonus()
# range [0x0848f078, 0x0848f0db]
0848f078 +0x00:  push   %ebp
0848f079 +0x01:  mov    %esp,%ebp
0848f07b +0x03:  sub    $0x38,%esp
0848f07e +0x06:  movl   $0x0,0x20(%esp)
0848f086 +0x0e:  movl   $0x0,0x1c(%esp)
0848f08e +0x16:  movl   $0xb,0x18(%esp)
0848f096 +0x1e:  movl   $0x1,0x14(%esp)
0848f09e +0x26:  movl   $0x7d6,0x10(%esp)
0848f0a6 +0x2e:  movl   $0x0,0xc(%esp)
0848f0ae +0x36:  movl   $0x2,0x8(%esp)
0848f0b6 +0x3e:  movl   $0x1,0x4(%esp)
0848f0be +0x46:  movl   $0x7d6,(%esp)
0848f0c5 +0x4d:  call   0848ef0c <_ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE>  ; WongWork::CEventMgr::_IsEventing(int, int, int, int, int, int, int, int, WongWork::CEventMgr::EVENT_TYPE)
0848f0ca +0x52:  test   %al,%al
0848f0cc +0x54:  je     0848f0d5 <+0x5d>
0848f0ce +0x56:  mov    $0x7,%eax
0848f0d3 +0x5b:  jmp    0848f0da <+0x62>
0848f0d5 +0x5d:  mov    $0x0,%eax
0848f0da +0x62:  leave
0848f0db +0x63:  ret
```

## 反编译 C

```c
// WongWork::CEventMgr::GetPremiumServiceBonus @ 0x848f078

/* WongWork::CEventMgr::GetPremiumServiceBonus() */

undefined4 WongWork::CEventMgr::GetPremiumServiceBonus(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = _IsEventing(0x7d6,1,2,0,0x7d6,1,0xb,0,0);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 7;
  }
  return uVar2;
}
```
