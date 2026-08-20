# Load

`_ZN4ARAD16Arad_DataManager4LoadEv`

`ARAD::Arad_DataManager::Load()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DataManager` | `0x081882cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081882cc  _ZN4ARAD16Arad_DataManager4LoadEv
#           ARAD::Arad_DataManager::Load()
# range [0x081882cc, 0x081882df]
081882cc +0x00:  push   %ebp
081882cd +0x01:  mov    %esp,%ebp
081882cf +0x03:  sub    $0x18,%esp
081882d2 +0x06:  mov    0x8(%ebp),%eax
081882d5 +0x09:  mov    %eax,(%esp)
081882d8 +0x0c:  call   081882f8 <_ZN4ARAD16Arad_DataManager12initAradDataEv>  ; ARAD::Arad_DataManager::initAradData()
081882dd +0x11:  leave
081882de +0x12:  ret
081882df +0x13:  nop
```

## 反编译 C

```c
// ARAD::Arad_DataManager::Load @ 0x81882cc

/* ARAD::Arad_DataManager::Load() */

void __thiscall ARAD::Arad_DataManager::Load(Arad_DataManager *this)

{
  initAradData(this);
  return;
}
```
