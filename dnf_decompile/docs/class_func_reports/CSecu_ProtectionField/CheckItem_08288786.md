# CheckItem

`_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONPK5CItem`

`CSecu_ProtectionField::CheckItem(CUser*, SECURITY_PROTCTION, CItem const*)`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x08288786` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08288786  _ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONPK5CItem
#           CSecu_ProtectionField::CheckItem(CUser*, SECURITY_PROTCTION, CItem const*)
# range [0x08288786, 0x082887cf]
08288786 +0x00:  push   %ebp
08288787 +0x01:  mov    %esp,%ebp
08288789 +0x03:  sub    $0x28,%esp
0828878c +0x06:  cmpl   $0x0,0x14(%ebp)
08288790 +0x0a:  je     08288798 <+0x12>
08288792 +0x0c:  cmpl   $0x0,0xc(%ebp)
08288796 +0x10:  jne    0828879f <+0x19>
08288798 +0x12:  mov    $0x1,%eax
0828879d +0x17:  jmp    082887cd <+0x47>
0828879f +0x19:  mov    0x14(%ebp),%eax
082887a2 +0x1c:  mov    %eax,(%esp)
082887a5 +0x1f:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
082887aa +0x24:  mov    %eax,-0xc(%ebp)
082887ad +0x27:  mov    -0xc(%ebp),%eax
082887b0 +0x2a:  mov    %eax,0xc(%esp)
082887b4 +0x2e:  mov    0x10(%ebp),%eax
082887b7 +0x31:  mov    %eax,0x8(%esp)
082887bb +0x35:  mov    0xc(%ebp),%eax
082887be +0x38:  mov    %eax,0x4(%esp)
082887c2 +0x3c:  mov    0x8(%ebp),%eax
082887c5 +0x3f:  mov    %eax,(%esp)
082887c8 +0x42:  call   0828873a <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONm>  ; CSecu_ProtectionField::CheckItem(CUser*, SECURITY_PROTCTION, unsigned long)
082887cd +0x47:  leave
082887ce +0x48:  ret
082887cf +0x49:  nop
```

## 反编译 C

```c
// CSecu_ProtectionField::CheckItem @ 0x8288786

/* CSecu_ProtectionField::CheckItem(CUser*, SECURITY_PROTCTION, CItem const*) */

undefined4 __thiscall
CSecu_ProtectionField::CheckItem
          (CSecu_ProtectionField *this,int param_1,undefined4 param_3,CItem *param_4)

{
  undefined4 uVar1;
  
  if ((param_4 == (CItem *)0x0) || (param_1 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = CItem::get_index(param_4);
    uVar1 = CheckItem(this,param_1,param_3,uVar1);
  }
  return uVar1;
}
```
