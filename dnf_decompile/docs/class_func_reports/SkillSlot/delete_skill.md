# delete_skill

`_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND`

`SkillSlot::delete_skill(int, int, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086047d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086047d8  _ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND
#           SkillSlot::delete_skill(int, int, ENUM_SKILL_TREE_KIND)
# range [0x086047d8, 0x08604897]
086047d8 +0x00:  push   %ebp
086047d9 +0x01:  mov    %esp,%ebp
086047db +0x03:  sub    $0x28,%esp
086047de +0x06:  movl   $0x0,-0x14(%ebp)
086047e5 +0x0d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086047ea +0x12:  mov    0x10(%ebp),%edx
086047ed +0x15:  mov    %edx,0x8(%esp)
086047f1 +0x19:  mov    0xc(%ebp),%edx
086047f4 +0x1c:  mov    %edx,0x4(%esp)
086047f8 +0x20:  mov    %eax,(%esp)
086047fb +0x23:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
08604800 +0x28:  mov    %eax,-0x14(%ebp)
08604803 +0x2b:  cmpl   $0x0,-0x14(%ebp)
08604807 +0x2f:  jne    08604813 <+0x3b>
08604809 +0x31:  mov    $0xffffffff,%eax
0860480e +0x36:  jmp    08604895 <+0xbd>
08604813 +0x3b:  mov    0x8(%ebp),%eax
08604816 +0x3e:  mov    (%eax),%eax
08604818 +0x40:  test   %eax,%eax
0860481a +0x42:  jne    08604823 <+0x4b>
0860481c +0x44:  mov    $0xffffffff,%eax
08604821 +0x49:  jmp    08604895 <+0xbd>
08604823 +0x4b:  mov    0x14(%ebp),%eax
08604826 +0x4e:  mov    %eax,0x4(%esp)
0860482a +0x52:  mov    0x8(%ebp),%eax
0860482d +0x55:  mov    %eax,(%esp)
08604830 +0x58:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
08604835 +0x5d:  mov    %eax,-0x10(%ebp)
08604838 +0x60:  cmpl   $0x0,-0x10(%ebp)
0860483c +0x64:  jne    08604845 <+0x6d>
0860483e +0x66:  mov    $0xffffffff,%eax
08604843 +0x6b:  jmp    08604895 <+0xbd>
08604845 +0x6d:  movl   $0x0,-0xc(%ebp)
0860484c +0x74:  jmp    08604882 <+0xaa>
0860484e +0x76:  mov    -0xc(%ebp),%eax
08604851 +0x79:  add    %eax,%eax
08604853 +0x7b:  add    -0x10(%ebp),%eax
08604856 +0x7e:  movzbl (%eax),%eax
08604859 +0x81:  movzbl %al,%edx
0860485c +0x84:  mov    -0x14(%ebp),%eax
0860485f +0x87:  mov    (%eax),%eax
08604861 +0x89:  cmp    %eax,%edx
08604863 +0x8b:  jne    0860487e <+0xa6>
08604865 +0x8d:  mov    -0xc(%ebp),%eax
08604868 +0x90:  add    %eax,%eax
0860486a +0x92:  add    -0x10(%ebp),%eax
0860486d +0x95:  movb   $0x0,(%eax)
08604870 +0x98:  mov    -0xc(%ebp),%eax
08604873 +0x9b:  add    %eax,%eax
08604875 +0x9d:  add    -0x10(%ebp),%eax
08604878 +0xa0:  movb   $0x0,0x1(%eax)
0860487c +0xa4:  jmp    08604890 <+0xb8>
0860487e +0xa6:  addl   $0x1,-0xc(%ebp)
08604882 +0xaa:  cmpl   $0xcb,-0xc(%ebp)
08604889 +0xb1:  setle  %al
0860488c +0xb4:  test   %al,%al
0860488e +0xb6:  jne    0860484e <+0x76>
08604890 +0xb8:  mov    $0x0,%eax
08604895 +0xbd:  leave
08604896 +0xbe:  ret
08604897 +0xbf:  nop
```

## 反编译 C

```c
// SkillSlot::delete_skill @ 0x86047d8

/* SkillSlot::delete_skill(int, int, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall
SkillSlot::delete_skill(SkillSlot *this,int param_1,undefined4 param_2,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 local_10;
  
  iVar1 = G_CDataManager();
  puVar2 = (uint *)CDataManager::find_skill(iVar1,param_1);
  if (puVar2 == (uint *)0x0) {
    uVar3 = 0xffffffff;
  }
  else if (*(int *)this == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = get_skillslot_buf(this,param_4,param_2);
    if (iVar1 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
        if ((uint)*(byte *)(local_10 * 2 + iVar1) == *puVar2) {
          *(undefined1 *)(local_10 * 2 + iVar1) = 0;
          *(undefined1 *)(local_10 * 2 + iVar1 + 1) = 0;
          break;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
