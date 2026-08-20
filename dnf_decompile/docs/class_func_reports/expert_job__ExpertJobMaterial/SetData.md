# SetData

`_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt`

`expert_job::ExpertJobMaterial::SetData(CUser*, unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `expert_job::ExpertJobMaterial` | `0x0849bf08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849bf08  _ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt
#           expert_job::ExpertJobMaterial::SetData(CUser*, unsigned short, unsigned short)
# range [0x0849bf08, 0x0849bfcf]
0849bf08 +0x00:  push   %ebp
0849bf09 +0x01:  mov    %esp,%ebp
0849bf0b +0x03:  push   %ebx
0849bf0c +0x04:  sub    $0x34,%esp
0849bf0f +0x07:  mov    0x10(%ebp),%edx
0849bf12 +0x0a:  mov    0x14(%ebp),%eax
0849bf15 +0x0d:  mov    %dx,-0x1c(%ebp)
0849bf19 +0x11:  mov    %ax,-0x20(%ebp)
0849bf1d +0x15:  cmpw   $0x0,-0x1c(%ebp)
0849bf22 +0x1a:  je     0849bf2e <+0x26>
0849bf24 +0x1c:  mov    $0x15,%eax
0849bf29 +0x21:  jmp    0849bfc9 <+0xc1>
0849bf2e +0x26:  movzwl -0x20(%ebp),%edx
0849bf32 +0x2a:  movzwl -0x1c(%ebp),%eax
0849bf36 +0x2e:  mov    %edx,0x8(%esp)
0849bf3a +0x32:  mov    %eax,0x4(%esp)
0849bf3e +0x36:  mov    0xc(%ebp),%eax
0849bf41 +0x39:  mov    %eax,(%esp)
0849bf44 +0x3c:  call   08680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>  ; CUser::GetCurCharacInventoryRef(unsigned short, unsigned short)
0849bf49 +0x41:  mov    %eax,-0xc(%ebp)
0849bf4c +0x44:  cmpl   $0x0,-0xc(%ebp)
0849bf50 +0x48:  jne    0849bf59 <+0x51>
0849bf52 +0x4a:  mov    $0x15,%eax
0849bf57 +0x4f:  jmp    0849bfc9 <+0xc1>
0849bf59 +0x51:  mov    -0xc(%ebp),%eax
0849bf5c +0x54:  mov    0x2(%eax),%eax
0849bf5f +0x57:  test   %eax,%eax
0849bf61 +0x59:  jne    0849bf6a <+0x62>
0849bf63 +0x5b:  mov    $0x15,%eax
0849bf68 +0x60:  jmp    0849bfc9 <+0xc1>
0849bf6a +0x62:  mov    -0xc(%ebp),%eax
0849bf6d +0x65:  mov    0x2(%eax),%edx
0849bf70 +0x68:  mov    0x8(%ebp),%eax
0849bf73 +0x6b:  mov    %edx,0x8(%eax)
0849bf76 +0x6e:  mov    -0xc(%ebp),%eax
0849bf79 +0x71:  mov    0x2(%eax),%eax
0849bf7c +0x74:  mov    %eax,%ebx
0849bf7e +0x76:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0849bf83 +0x7b:  mov    %ebx,0x4(%esp)
0849bf87 +0x7f:  mov    %eax,(%esp)
0849bf8a +0x82:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0849bf8f +0x87:  mov    0x8(%ebp),%edx
0849bf92 +0x8a:  mov    %eax,0x4(%edx)
0849bf95 +0x8d:  mov    0x8(%ebp),%eax
0849bf98 +0x90:  mov    0x4(%eax),%eax
0849bf9b +0x93:  test   %eax,%eax
0849bf9d +0x95:  jne    0849bfa6 <+0x9e>
0849bf9f +0x97:  mov    $0x15,%eax
0849bfa4 +0x9c:  jmp    0849bfc9 <+0xc1>
0849bfa6 +0x9e:  mov    0x8(%ebp),%eax
0849bfa9 +0xa1:  mov    0xc(%ebp),%edx
0849bfac +0xa4:  mov    %edx,(%eax)
0849bfae +0xa6:  mov    0x8(%ebp),%eax
0849bfb1 +0xa9:  movzwl -0x20(%ebp),%edx
0849bfb5 +0xad:  mov    %dx,0xc(%eax)
0849bfb9 +0xb1:  mov    0x8(%ebp),%eax
0849bfbc +0xb4:  movzwl -0x1c(%ebp),%edx
0849bfc0 +0xb8:  mov    %dx,0xe(%eax)
0849bfc4 +0xbc:  mov    $0x0,%eax
0849bfc9 +0xc1:  add    $0x34,%esp
0849bfcc +0xc4:  pop    %ebx
0849bfcd +0xc5:  pop    %ebp
0849bfce +0xc6:  ret
0849bfcf +0xc7:  nop
```

## 反编译 C

```c
// expert_job::ExpertJobMaterial::SetData @ 0x849bf08

/* expert_job::ExpertJobMaterial::SetData(CUser*, unsigned short, unsigned short) */

undefined4 __thiscall
expert_job::ExpertJobMaterial::SetData
          (ExpertJobMaterial *this,CUser *param_1,ushort param_2,ushort param_3)

{
  undefined4 uVar1;
  int iVar2;
  CDataManager *this_00;
  
  if (param_2 == 0) {
    iVar2 = CUser::GetCurCharacInventoryRef(param_1,0,param_3);
    if (iVar2 == 0) {
      uVar1 = 0x15;
    }
    else if (*(int *)(iVar2 + 2) == 0) {
      uVar1 = 0x15;
    }
    else {
      *(undefined4 *)(this + 8) = *(undefined4 *)(iVar2 + 2);
      iVar2 = *(int *)(iVar2 + 2);
      this_00 = (CDataManager *)G_CDataManager();
      uVar1 = CDataManager::find_item(this_00,iVar2);
      *(undefined4 *)(this + 4) = uVar1;
      if (*(int *)(this + 4) == 0) {
        uVar1 = 0x15;
      }
      else {
        *(CUser **)this = param_1;
        *(ushort *)(this + 0xc) = param_3;
        *(undefined2 *)(this + 0xe) = 0;
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0x15;
  }
  return uVar1;
}
```
