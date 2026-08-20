# _updateTimeCount

`_ZN8WongWork12CGenUniqueNo16_updateTimeCountEv`

`WongWork::CGenUniqueNo::_updateTimeCount()`

| 类 | 地址 |
|---|---|
| `WongWork::CGenUniqueNo` | `0x084b76ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b76ac  _ZN8WongWork12CGenUniqueNo16_updateTimeCountEv
#           WongWork::CGenUniqueNo::_updateTimeCount()
# range [0x084b76ac, 0x084b76d7]
084b76ac +0x00:  push   %ebp
084b76ad +0x01:  mov    %esp,%ebp
084b76af +0x03:  movzwl &_ZN8WongWork12CGenUniqueNo12m_nTimeCountE,%eax
084b76b6 +0x0a:  add    $0x1,%eax
084b76b9 +0x0d:  mov    %ax,&_ZN8WongWork12CGenUniqueNo12m_nTimeCountE
084b76bf +0x13:  movzwl &_ZN8WongWork12CGenUniqueNo12m_nTimeCountE,%eax
084b76c6 +0x1a:  cmp    $0xc34f,%ax
084b76ca +0x1e:  jbe    084b76d5 <+0x29>
084b76cc +0x20:  movw   $0x1,&_ZN8WongWork12CGenUniqueNo12m_nTimeCountE
084b76d5 +0x29:  pop    %ebp
084b76d6 +0x2a:  ret
084b76d7 +0x2b:  nop
```

## 反编译 C

```c
// WongWork::CGenUniqueNo::_updateTimeCount @ 0x84b76ac

/* WongWork::CGenUniqueNo::_updateTimeCount() */

void WongWork::CGenUniqueNo::_updateTimeCount(void)

{
  m_nTimeCount = m_nTimeCount + 1;
  if (49999 < m_nTimeCount) {
    m_nTimeCount = 1;
  }
  return;
}
```
