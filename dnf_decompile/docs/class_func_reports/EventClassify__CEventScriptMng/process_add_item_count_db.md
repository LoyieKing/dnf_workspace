# process_add_item_count_db

`_ZN13EventClassify15CEventScriptMng25process_add_item_count_dbEP5CUserii`

`EventClassify::CEventScriptMng::process_add_item_count_db(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810bea8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810bea8  _ZN13EventClassify15CEventScriptMng25process_add_item_count_dbEP5CUserii
#           EventClassify::CEventScriptMng::process_add_item_count_db(CUser*, int, int)
# range [0x0810bea8, 0x0810beff]
0810bea8 +0x00:  push   %ebp
0810bea9 +0x01:  mov    %esp,%ebp
0810beab +0x03:  sub    $0x28,%esp
0810beae +0x06:  cmpl   $0x0,0xc(%ebp)
0810beb2 +0x0a:  je     0810befd <+0x55>
0810beb4 +0x0c:  movl   $0x193,0x4(%esp)
0810bebc +0x14:  mov    0x8(%ebp),%eax
0810bebf +0x17:  mov    %eax,(%esp)
0810bec2 +0x1a:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0810bec7 +0x1f:  mov    %eax,-0xc(%ebp)
0810beca +0x22:  cmpl   $0x0,-0xc(%ebp)
0810bece +0x26:  je     0810befe <+0x56>
0810bed0 +0x28:  mov    0x10(%ebp),%eax
0810bed3 +0x2b:  mov    %eax,0x4(%esp)
0810bed7 +0x2f:  mov    -0xc(%ebp),%eax
0810beda +0x32:  mov    %eax,(%esp)
0810bedd +0x35:  call   0810e08e <_ZN13EventClassify15CAddItemCountDB13is_event_itemEi>  ; EventClassify::CAddItemCountDB::is_event_item(int)
0810bee2 +0x3a:  test   %al,%al
0810bee4 +0x3c:  je     0810befe <+0x56>
0810bee6 +0x3e:  mov    0x14(%ebp),%eax
0810bee9 +0x41:  movzwl %ax,%edx
0810beec +0x44:  mov    0xc(%ebp),%eax
0810beef +0x47:  mov    %edx,0x4(%esp)
0810bef3 +0x4b:  mov    %eax,(%esp)
0810bef6 +0x4e:  call   08110cda <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1ec>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1ec
0810befb +0x53:  jmp    0810befe <+0x56>
0810befd +0x55:  nop
0810befe +0x56:  leave
0810beff +0x57:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::process_add_item_count_db @ 0x810bea8

/* EventClassify::CEventScriptMng::process_add_item_count_db(CUser*, int, int) */

void __thiscall
EventClassify::CEventScriptMng::process_add_item_count_db
          (CEventScriptMng *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  CAddItemCountDB *this_00;
  
  if (param_1 != (CUser *)0x0) {
    this_00 = (CAddItemCountDB *)get_event_entity((int)this);
    if (this_00 != (CAddItemCountDB *)0x0) {
      cVar1 = CAddItemCountDB::is_event_item(this_00,param_2);
      if (cVar1 != '\0') {
        CUserCharacInfo::IncCurCharacEventAddItemCount((CUserCharacInfo *)param_1,(ushort)param_3);
      }
    }
  }
  return;
}
```
