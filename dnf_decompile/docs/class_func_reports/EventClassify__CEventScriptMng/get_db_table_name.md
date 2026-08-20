# get_db_table_name

`_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi`

`EventClassify::CEventScriptMng::get_db_table_name(int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810b110` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b110  _ZN13EventClassify15CEventScriptMng17get_db_table_nameEi
#           EventClassify::CEventScriptMng::get_db_table_name(int)
# range [0x0810b110, 0x0810b135]
0810b110 +0x00:  push   %ebp
0810b111 +0x01:  mov    %esp,%ebp
0810b113 +0x03:  sub    $0x18,%esp
0810b116 +0x06:  mov    0xc(%ebp),%eax
0810b119 +0x09:  mov    %eax,0x4(%esp)
0810b11d +0x0d:  mov    0x8(%ebp),%eax
0810b120 +0x10:  mov    %eax,(%esp)
0810b123 +0x13:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0810b128 +0x18:  mov    (%eax),%edx
0810b12a +0x1a:  add    $0x20,%edx
0810b12d +0x1d:  mov    (%edx),%edx
0810b12f +0x1f:  mov    %eax,(%esp)
0810b132 +0x22:  call   *%edx
0810b134 +0x24:  leave
0810b135 +0x25:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::get_db_table_name @ 0x810b110

/* EventClassify::CEventScriptMng::get_db_table_name(int) */

void __thiscall EventClassify::CEventScriptMng::get_db_table_name(CEventScriptMng *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)get_event_entity((int)this);
  (**(code **)(*piVar1 + 0x20))(piVar1,param_1);
  return;
}
```
