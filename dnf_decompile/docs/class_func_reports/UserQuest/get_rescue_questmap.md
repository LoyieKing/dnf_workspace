# get_rescue_questmap

`_ZNK9UserQuest19get_rescue_questmapEi`

`UserQuest::get_rescue_questmap(int) const`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086aca16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086aca16  _ZNK9UserQuest19get_rescue_questmapEi
#           UserQuest::get_rescue_questmap(int) const
# range [0x086aca16, 0x086acacf]
086aca16 +0x00:  push   %ebp
086aca17 +0x01:  mov    %esp,%ebp
086aca19 +0x03:  push   %ebx
086aca1a +0x04:  sub    $0x24,%esp
086aca1d +0x07:  movl   $0x0,-0x14(%ebp)
086aca24 +0x0e:  jmp    086acab6 <+0xa0>
086aca29 +0x13:  mov    -0x14(%ebp),%edx
086aca2c +0x16:  mov    0x8(%ebp),%eax
086aca2f +0x19:  add    $0x1d4c,%edx
086aca35 +0x1f:  mov    0x8(%eax,%edx,4),%eax
086aca39 +0x23:  test   %eax,%eax
086aca3b +0x25:  jle    086acab2 <+0x9c>
086aca3d +0x27:  mov    -0x14(%ebp),%edx
086aca40 +0x2a:  mov    0x8(%ebp),%eax
086aca43 +0x2d:  add    $0x1d60,%edx
086aca49 +0x33:  mov    0x8(%eax,%edx,4),%eax
086aca4d +0x37:  test   %eax,%eax
086aca4f +0x39:  je     086acab1 <+0x9b>
086aca51 +0x3b:  mov    -0x14(%ebp),%edx
086aca54 +0x3e:  mov    0x8(%ebp),%eax
086aca57 +0x41:  add    $0x1d4c,%edx
086aca5d +0x47:  mov    0x8(%eax,%edx,4),%ebx
086aca61 +0x4b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086aca66 +0x50:  mov    %ebx,0x4(%esp)
086aca6a +0x54:  mov    %eax,(%esp)
086aca6d +0x57:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
086aca72 +0x5c:  mov    %eax,-0x10(%ebp)
086aca75 +0x5f:  cmpl   $0x0,-0x10(%ebp)
086aca79 +0x63:  jne    086aca82 <+0x6c>
086aca7b +0x65:  mov    $0x0,%eax
086aca80 +0x6a:  jmp    086acaca <+0xb4>
086aca82 +0x6c:  mov    0x8(%ebp),%eax
086aca85 +0x6f:  movzwl 0x75da(%eax),%eax
086aca8c +0x76:  cwtl
086aca8d +0x77:  mov    %eax,0x8(%esp)
086aca91 +0x7b:  mov    0xc(%ebp),%eax
086aca94 +0x7e:  mov    %eax,0x4(%esp)
086aca98 +0x82:  mov    -0x10(%ebp),%eax
086aca9b +0x85:  mov    %eax,(%esp)
086aca9e +0x88:  call   083536f2 <_ZNK5Quest13get_appearmapEii>  ; Quest::get_appearmap(int, int) const
086acaa3 +0x8d:  mov    %eax,-0xc(%ebp)
086acaa6 +0x90:  cmpl   $0x0,-0xc(%ebp)
086acaaa +0x94:  jle    086acab2 <+0x9c>
086acaac +0x96:  mov    -0xc(%ebp),%eax
086acaaf +0x99:  jmp    086acaca <+0xb4>
086acab1 +0x9b:  nop
086acab2 +0x9c:  addl   $0x1,-0x14(%ebp)
086acab6 +0xa0:  cmpl   $0x13,-0x14(%ebp)
086acaba +0xa4:  setle  %al
086acabd +0xa7:  test   %al,%al
086acabf +0xa9:  jne    086aca29 <+0x13>
086acac5 +0xaf:  mov    $0x0,%eax
086acaca +0xb4:  add    $0x24,%esp
086acacd +0xb7:  pop    %ebx
086acace +0xb8:  pop    %ebp
086acacf +0xb9:  ret
```

## 反编译 C

```c
// UserQuest::get_rescue_questmap @ 0x86aca16

/* UserQuest::get_rescue_questmap(int) const */

int __thiscall UserQuest::get_rescue_questmap(UserQuest *this,int param_1)

{
  int iVar1;
  Quest *this_00;
  int local_18;
  
  local_18 = 0;
  do {
    if (0x13 < local_18) {
      return 0;
    }
    if ((0 < *(int *)(this + (local_18 + 0x1d4c) * 4 + 8)) &&
       (*(int *)(this + (local_18 + 0x1d60) * 4 + 8) != 0)) {
      iVar1 = G_CDataManager();
      this_00 = (Quest *)CDataManager::find_quest(iVar1);
      if (this_00 == (Quest *)0x0) {
        return 0;
      }
      iVar1 = Quest::get_appearmap(this_00,param_1,(int)*(short *)(this + 0x75da));
      if (0 < iVar1) {
        return iVar1;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
