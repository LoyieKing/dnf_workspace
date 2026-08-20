# get_hellparty_script_values

`_ZN12CDataManager27get_hellparty_script_valuesEv`

`CDataManager::get_hellparty_script_values()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0836378c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836378c  _ZN12CDataManager27get_hellparty_script_valuesEv
#           CDataManager::get_hellparty_script_values()
# range [0x0836378c, 0x08363799]
0836378c +0x00:  push   %ebp
0836378d +0x01:  mov    %esp,%ebp
0836378f +0x03:  sub    $0x8,%esp
08363792 +0x06:  call   089097c4 <_Z26Get_instance_stHellParty_tv>  ; Get_instance_stHellParty_t()
08363797 +0x0b:  leave
08363798 +0x0c:  ret
08363799 +0x0d:  nop
```

## 反编译 C

```c
// CDataManager::get_hellparty_script_values @ 0x836378c

/* CDataManager::get_hellparty_script_values() */

void CDataManager::get_hellparty_script_values(void)

{
  Get_instance_stHellParty_t();
  return;
}
```
