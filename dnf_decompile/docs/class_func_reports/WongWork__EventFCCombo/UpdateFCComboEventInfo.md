# UpdateFCComboEventInfo

`_ZN8WongWork12EventFCCombo22UpdateFCComboEventInfoEji`

`WongWork::EventFCCombo::UpdateFCComboEventInfo(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventFCCombo` | `0x083fb929` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fb929  _ZN8WongWork12EventFCCombo22UpdateFCComboEventInfoEji
#           WongWork::EventFCCombo::UpdateFCComboEventInfo(unsigned int, int)
# range [0x083fb929, 0x083fb975]
083fb929 +0x00:  push   %ebp
083fb92a +0x01:  mov    %esp,%ebp
083fb92c +0x03:  sub    $0x28,%esp
083fb92f +0x06:  call   0844dc7c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x892>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x892
083fb934 +0x0b:  mov    %eax,-0xc(%ebp)
083fb937 +0x0e:  movl   $0x0,0x4(%esp)
083fb93f +0x16:  mov    0x8(%ebp),%eax
083fb942 +0x19:  mov    %eax,(%esp)
083fb945 +0x1c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fb94a +0x21:  mov    %eax,0x8(%esp)
083fb94e +0x25:  movl   $"upDate event_combo_entry set item_check=unix_timestamp(now()) where id=%s",0x4(%esp)
083fb956 +0x2d:  mov    -0xc(%ebp),%eax
083fb959 +0x30:  mov    %eax,(%esp)
083fb95c +0x33:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fb961 +0x38:  movl   $0x1,0x4(%esp)
083fb969 +0x40:  mov    -0xc(%ebp),%eax
083fb96c +0x43:  mov    %eax,(%esp)
083fb96f +0x46:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fb974 +0x4b:  leave
083fb975 +0x4c:  ret
```

## 反编译 C

```c
// WongWork::EventFCCombo::UpdateFCComboEventInfo @ 0x83fb929

/* WongWork::EventFCCombo::UpdateFCComboEventInfo(unsigned int, int) */

void WongWork::EventFCCombo::UpdateFCComboEventInfo(uint param_1,int param_2)

{
  MySQL *this;
  undefined4 uVar1;
  
  this = (MySQL *)GetDBHandle();
  uVar1 = NumberToString(param_1,0);
  MySQL::set_query(this,"upDate event_combo_entry set item_check=unix_timestamp(now()) where id=%s",
                   uVar1);
  MySQL::exec(this,true);
  return;
}
```
