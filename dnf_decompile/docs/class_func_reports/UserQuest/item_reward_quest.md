# item_reward_quest

`_ZNK9UserQuest17item_reward_questEi`

`UserQuest::item_reward_quest(int) const`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086ac954` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ac954  _ZNK9UserQuest17item_reward_questEi
#           UserQuest::item_reward_quest(int) const
# range [0x086ac954, 0x086aca15]
086ac954 +0x00:  push   %ebp
086ac955 +0x01:  mov    %esp,%ebp
086ac957 +0x03:  push   %ebx
086ac958 +0x04:  sub    $0x24,%esp
086ac95b +0x07:  movl   $0x0,-0x10(%ebp)
086ac962 +0x0e:  jmp    086ac9fc <+0xa8>
086ac967 +0x13:  mov    -0x10(%ebp),%edx
086ac96a +0x16:  mov    0x8(%ebp),%eax
086ac96d +0x19:  add    $0x1d4c,%edx
086ac973 +0x1f:  mov    0x8(%eax,%edx,4),%eax
086ac977 +0x23:  test   %eax,%eax
086ac979 +0x25:  je     086ac9f8 <+0xa4>
086ac97b +0x27:  mov    -0x10(%ebp),%edx
086ac97e +0x2a:  mov    0x8(%ebp),%eax
086ac981 +0x2d:  add    $0x1d60,%edx
086ac987 +0x33:  mov    0x8(%eax,%edx,4),%eax
086ac98b +0x37:  test   %eax,%eax
086ac98d +0x39:  je     086ac9f7 <+0xa3>
086ac98f +0x3b:  mov    -0x10(%ebp),%edx
086ac992 +0x3e:  mov    0x8(%ebp),%eax
086ac995 +0x41:  add    $0x1d4c,%edx
086ac99b +0x47:  mov    0x8(%eax,%edx,4),%ebx
086ac99f +0x4b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ac9a4 +0x50:  mov    %ebx,0x4(%esp)
086ac9a8 +0x54:  mov    %eax,(%esp)
086ac9ab +0x57:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
086ac9b0 +0x5c:  mov    %eax,-0xc(%ebp)
086ac9b3 +0x5f:  cmpl   $0x0,-0xc(%ebp)
086ac9b7 +0x63:  jne    086ac9c0 <+0x6c>
086ac9b9 +0x65:  mov    $0x0,%eax
086ac9be +0x6a:  jmp    086aca10 <+0xbc>
086ac9c0 +0x6c:  mov    0x8(%ebp),%eax
086ac9c3 +0x6f:  movzwl 0x75da(%eax),%eax
086ac9ca +0x76:  cwtl
086ac9cb +0x77:  mov    %eax,0x8(%esp)
086ac9cf +0x7b:  mov    0xc(%ebp),%eax
086ac9d2 +0x7e:  mov    %eax,0x4(%esp)
086ac9d6 +0x82:  mov    -0xc(%ebp),%eax
086ac9d9 +0x85:  mov    %eax,(%esp)
086ac9dc +0x88:  call   08353342 <_ZNK5Quest16check_clear_itemEii>  ; Quest::check_clear_item(int, int) const
086ac9e1 +0x8d:  test   %al,%al
086ac9e3 +0x8f:  je     086ac9f8 <+0xa4>
086ac9e5 +0x91:  mov    -0x10(%ebp),%edx
086ac9e8 +0x94:  mov    0x8(%ebp),%eax
086ac9eb +0x97:  add    $0x1d4c,%edx
086ac9f1 +0x9d:  mov    0x8(%eax,%edx,4),%eax
086ac9f5 +0xa1:  jmp    086aca10 <+0xbc>
086ac9f7 +0xa3:  nop
086ac9f8 +0xa4:  addl   $0x1,-0x10(%ebp)
086ac9fc +0xa8:  cmpl   $0x13,-0x10(%ebp)
086aca00 +0xac:  setle  %al
086aca03 +0xaf:  test   %al,%al
086aca05 +0xb1:  jne    086ac967 <+0x13>
086aca0b +0xb7:  mov    $0x0,%eax
086aca10 +0xbc:  add    $0x24,%esp
086aca13 +0xbf:  pop    %ebx
086aca14 +0xc0:  pop    %ebp
086aca15 +0xc1:  ret
```

## 反编译 C

```c
// UserQuest::item_reward_quest @ 0x86ac954

/* UserQuest::item_reward_quest(int) const */

undefined4 __thiscall UserQuest::item_reward_quest(UserQuest *this,int param_1)

{
  char cVar1;
  int iVar2;
  Quest *this_00;
  int local_14;
  
  local_14 = 0;
  do {
    if (0x13 < local_14) {
      return 0;
    }
    if ((*(int *)(this + (local_14 + 0x1d4c) * 4 + 8) != 0) &&
       (*(int *)(this + (local_14 + 0x1d60) * 4 + 8) != 0)) {
      iVar2 = G_CDataManager();
      this_00 = (Quest *)CDataManager::find_quest(iVar2);
      if (this_00 == (Quest *)0x0) {
        return 0;
      }
      cVar1 = Quest::check_clear_item(this_00,param_1,(int)*(short *)(this + 0x75da));
      if (cVar1 != '\0') {
        return *(undefined4 *)(this + (local_14 + 0x1d4c) * 4 + 8);
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
