# process_add_quest_count_db

`_ZN13EventClassify15CEventScriptMng26process_add_quest_count_dbEP5CUseri`

`EventClassify::CEventScriptMng::process_add_quest_count_db(CUser*, int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810bf00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810bf00  _ZN13EventClassify15CEventScriptMng26process_add_quest_count_dbEP5CUseri
#           EventClassify::CEventScriptMng::process_add_quest_count_db(CUser*, int)
# range [0x0810bf00, 0x0810bf55]
0810bf00 +0x00:  push   %ebp
0810bf01 +0x01:  mov    %esp,%ebp
0810bf03 +0x03:  sub    $0x28,%esp
0810bf06 +0x06:  cmpl   $0x0,0xc(%ebp)
0810bf0a +0x0a:  je     0810bf53 <+0x53>
0810bf0c +0x0c:  movl   $0x193,0x4(%esp)
0810bf14 +0x14:  mov    0x8(%ebp),%eax
0810bf17 +0x17:  mov    %eax,(%esp)
0810bf1a +0x1a:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0810bf1f +0x1f:  mov    %eax,-0xc(%ebp)
0810bf22 +0x22:  cmpl   $0x0,-0xc(%ebp)
0810bf26 +0x26:  je     0810bf54 <+0x54>
0810bf28 +0x28:  mov    0x10(%ebp),%eax
0810bf2b +0x2b:  mov    %eax,0x4(%esp)
0810bf2f +0x2f:  mov    -0xc(%ebp),%eax
0810bf32 +0x32:  mov    %eax,(%esp)
0810bf35 +0x35:  call   0810e0f4 <_ZN13EventClassify15CAddItemCountDB14is_event_questEi>  ; EventClassify::CAddItemCountDB::is_event_quest(int)
0810bf3a +0x3a:  test   %al,%al
0810bf3c +0x3c:  je     0810bf54 <+0x54>
0810bf3e +0x3e:  mov    0xc(%ebp),%eax
0810bf41 +0x41:  movl   $0x1,0x4(%esp)
0810bf49 +0x49:  mov    %eax,(%esp)
0810bf4c +0x4c:  call   08110cda <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1ec>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1ec
0810bf51 +0x51:  jmp    0810bf54 <+0x54>
0810bf53 +0x53:  nop
0810bf54 +0x54:  leave
0810bf55 +0x55:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::process_add_quest_count_db @ 0x810bf00

/* EventClassify::CEventScriptMng::process_add_quest_count_db(CUser*, int) */

void __thiscall
EventClassify::CEventScriptMng::process_add_quest_count_db
          (CEventScriptMng *this,CUser *param_1,int param_2)

{
  char cVar1;
  CAddItemCountDB *this_00;
  
  if (param_1 != (CUser *)0x0) {
    this_00 = (CAddItemCountDB *)get_event_entity((int)this);
    if (this_00 != (CAddItemCountDB *)0x0) {
      cVar1 = CAddItemCountDB::is_event_quest(this_00,param_2);
      if (cVar1 != '\0') {
        CUserCharacInfo::IncCurCharacEventAddItemCount((CUserCharacInfo *)param_1,1);
      }
    }
  }
  return;
}
```
