# InsertItem

`_ZN13CAccountCargo10InsertItemER10Inven_Itemi`

`CAccountCargo::InsertItem(Inven_Item&, int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x08289c82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08289c82  _ZN13CAccountCargo10InsertItemER10Inven_Itemi
#           CAccountCargo::InsertItem(Inven_Item&, int)
# range [0x08289c82, 0x08289e3b]
08289c82 +0x000:  push   %ebp
08289c83 +0x001:  mov    %esp,%ebp
08289c85 +0x003:  push   %ebx
08289c86 +0x004:  sub    $0x24,%esp
08289c89 +0x007:  mov    0x10(%ebp),%eax
08289c8c +0x00a:  mov    %eax,0x4(%esp)
08289c90 +0x00e:  mov    0x8(%ebp),%eax
08289c93 +0x011:  mov    %eax,(%esp)
08289c96 +0x014:  call   0828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>  ; CAccountCargo::CheckValidSlot(int) const
08289c9b +0x019:  xor    $0x1,%eax
08289c9e +0x01c:  test   %al,%al
08289ca0 +0x01e:  je     08289cac <+0x2a>
08289ca2 +0x020:  mov    $0xffffffff,%eax
08289ca7 +0x025:  jmp    08289e36 <+0x1b4>
08289cac +0x02a:  movl   $0xffffffff,-0xc(%ebp)
08289cb3 +0x031:  mov    0xc(%ebp),%eax
08289cb6 +0x034:  mov    %eax,(%esp)
08289cb9 +0x037:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
08289cbe +0x03c:  test   %al,%al
08289cc0 +0x03e:  je     08289d62 <+0xe0>
08289cc6 +0x044:  mov    0x10(%ebp),%edx
08289cc9 +0x047:  mov    0x8(%ebp),%eax
08289ccc +0x04a:  imul   $0x3d,%edx,%edx
08289ccf +0x04d:  mov    0x6(%edx,%eax,1),%eax
08289cd3 +0x051:  test   %eax,%eax
08289cd5 +0x053:  jne    08289e29 <+0x1a7>
08289cdb +0x059:  mov    0x10(%ebp),%edx
08289cde +0x05c:  mov    0x8(%ebp),%eax
08289ce1 +0x05f:  imul   $0x3d,%edx,%edx
08289ce4 +0x062:  mov    0xc(%ebp),%ecx
08289ce7 +0x065:  mov    (%ecx),%ebx
08289ce9 +0x067:  mov    %ebx,0x4(%edx,%eax,1)
08289ced +0x06b:  mov    0x4(%ecx),%ebx
08289cf0 +0x06e:  mov    %ebx,0x8(%edx,%eax,1)
08289cf4 +0x072:  mov    0x8(%ecx),%ebx
08289cf7 +0x075:  mov    %ebx,0xc(%edx,%eax,1)
08289cfb +0x079:  mov    0xc(%ecx),%ebx
08289cfe +0x07c:  mov    %ebx,0x10(%edx,%eax,1)
08289d02 +0x080:  mov    0x10(%ecx),%ebx
08289d05 +0x083:  mov    %ebx,0x14(%edx,%eax,1)
08289d09 +0x087:  mov    0x14(%ecx),%ebx
08289d0c +0x08a:  mov    %ebx,0x18(%edx,%eax,1)
08289d10 +0x08e:  mov    0x18(%ecx),%ebx
08289d13 +0x091:  mov    %ebx,0x1c(%edx,%eax,1)
08289d17 +0x095:  mov    0x1c(%ecx),%ebx
08289d1a +0x098:  mov    %ebx,0x20(%edx,%eax,1)
08289d1e +0x09c:  mov    0x20(%ecx),%ebx
08289d21 +0x09f:  mov    %ebx,0x24(%edx,%eax,1)
08289d25 +0x0a3:  mov    0x24(%ecx),%ebx
08289d28 +0x0a6:  mov    %ebx,0x28(%edx,%eax,1)
08289d2c +0x0aa:  mov    0x28(%ecx),%ebx
08289d2f +0x0ad:  mov    %ebx,0x2c(%edx,%eax,1)
08289d33 +0x0b1:  mov    0x2c(%ecx),%ebx
08289d36 +0x0b4:  mov    %ebx,0x30(%edx,%eax,1)
08289d3a +0x0b8:  mov    0x30(%ecx),%ebx
08289d3d +0x0bb:  mov    %ebx,0x34(%edx,%eax,1)
08289d41 +0x0bf:  mov    0x34(%ecx),%ebx
08289d44 +0x0c2:  mov    %ebx,0x38(%edx,%eax,1)
08289d48 +0x0c6:  mov    0x38(%ecx),%ebx
08289d4b +0x0c9:  mov    %ebx,0x3c(%edx,%eax,1)
08289d4f +0x0cd:  movzbl 0x3c(%ecx),%ecx
08289d53 +0x0d1:  mov    %cl,0x40(%edx,%eax,1)
08289d57 +0x0d5:  mov    0x10(%ebp),%eax
08289d5a +0x0d8:  mov    %eax,-0xc(%ebp)
08289d5d +0x0db:  jmp    08289e29 <+0x1a7>
08289d62 +0x0e0:  mov    0xc(%ebp),%eax
08289d65 +0x0e3:  mov    0x2(%eax),%ecx
08289d68 +0x0e6:  mov    0x10(%ebp),%edx
08289d6b +0x0e9:  mov    0x8(%ebp),%eax
08289d6e +0x0ec:  imul   $0x3d,%edx,%edx
08289d71 +0x0ef:  mov    0x6(%edx,%eax,1),%eax
08289d75 +0x0f3:  cmp    %eax,%ecx
08289d77 +0x0f5:  jne    08289da7 <+0x125>
08289d79 +0x0f7:  mov    0x10(%ebp),%ebx
08289d7c +0x0fa:  mov    0x10(%ebp),%edx
08289d7f +0x0fd:  mov    0x8(%ebp),%eax
08289d82 +0x100:  imul   $0x3d,%edx,%edx
08289d85 +0x103:  mov    0xb(%edx,%eax,1),%edx
08289d89 +0x107:  mov    0xc(%ebp),%eax
08289d8c +0x10a:  mov    0x7(%eax),%eax
08289d8f +0x10d:  lea    (%edx,%eax,1),%ecx
08289d92 +0x110:  mov    0x8(%ebp),%eax
08289d95 +0x113:  imul   $0x3d,%ebx,%edx
08289d98 +0x116:  mov    %ecx,0xb(%edx,%eax,1)
08289d9c +0x11a:  mov    0x10(%ebp),%eax
08289d9f +0x11d:  mov    %eax,-0xc(%ebp)
08289da2 +0x120:  jmp    08289e29 <+0x1a7>
08289da7 +0x125:  mov    0x10(%ebp),%edx
08289daa +0x128:  mov    0x8(%ebp),%eax
08289dad +0x12b:  imul   $0x3d,%edx,%edx
08289db0 +0x12e:  mov    0xc(%ebp),%ecx
08289db3 +0x131:  mov    (%ecx),%ebx
08289db5 +0x133:  mov    %ebx,0x4(%edx,%eax,1)
08289db9 +0x137:  mov    0x4(%ecx),%ebx
08289dbc +0x13a:  mov    %ebx,0x8(%edx,%eax,1)
08289dc0 +0x13e:  mov    0x8(%ecx),%ebx
08289dc3 +0x141:  mov    %ebx,0xc(%edx,%eax,1)
08289dc7 +0x145:  mov    0xc(%ecx),%ebx
08289dca +0x148:  mov    %ebx,0x10(%edx,%eax,1)
08289dce +0x14c:  mov    0x10(%ecx),%ebx
08289dd1 +0x14f:  mov    %ebx,0x14(%edx,%eax,1)
08289dd5 +0x153:  mov    0x14(%ecx),%ebx
08289dd8 +0x156:  mov    %ebx,0x18(%edx,%eax,1)
08289ddc +0x15a:  mov    0x18(%ecx),%ebx
08289ddf +0x15d:  mov    %ebx,0x1c(%edx,%eax,1)
08289de3 +0x161:  mov    0x1c(%ecx),%ebx
08289de6 +0x164:  mov    %ebx,0x20(%edx,%eax,1)
08289dea +0x168:  mov    0x20(%ecx),%ebx
08289ded +0x16b:  mov    %ebx,0x24(%edx,%eax,1)
08289df1 +0x16f:  mov    0x24(%ecx),%ebx
08289df4 +0x172:  mov    %ebx,0x28(%edx,%eax,1)
08289df8 +0x176:  mov    0x28(%ecx),%ebx
08289dfb +0x179:  mov    %ebx,0x2c(%edx,%eax,1)
08289dff +0x17d:  mov    0x2c(%ecx),%ebx
08289e02 +0x180:  mov    %ebx,0x30(%edx,%eax,1)
08289e06 +0x184:  mov    0x30(%ecx),%ebx
08289e09 +0x187:  mov    %ebx,0x34(%edx,%eax,1)
08289e0d +0x18b:  mov    0x34(%ecx),%ebx
08289e10 +0x18e:  mov    %ebx,0x38(%edx,%eax,1)
08289e14 +0x192:  mov    0x38(%ecx),%ebx
08289e17 +0x195:  mov    %ebx,0x3c(%edx,%eax,1)
08289e1b +0x199:  movzbl 0x3c(%ecx),%ecx
08289e1f +0x19d:  mov    %cl,0x40(%edx,%eax,1)
08289e23 +0x1a1:  mov    0x10(%ebp),%eax
08289e26 +0x1a4:  mov    %eax,-0xc(%ebp)
08289e29 +0x1a7:  mov    0x8(%ebp),%eax
08289e2c +0x1aa:  movb   $0x1,0xd64(%eax)
08289e33 +0x1b1:  mov    -0xc(%ebp),%eax
08289e36 +0x1b4:  add    $0x24,%esp
08289e39 +0x1b7:  pop    %ebx
08289e3a +0x1b8:  pop    %ebp
08289e3b +0x1b9:  ret
```

## 反编译 C

```c
// CAccountCargo::InsertItem @ 0x8289c82

/* CAccountCargo::InsertItem(Inven_Item&, int) */

int __thiscall CAccountCargo::InsertItem(CAccountCargo *this,Inven_Item *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_10;
  
  cVar1 = CheckValidSlot(this,param_2);
  if (cVar1 == '\x01') {
    local_10 = -1;
    cVar1 = Inven_Item::isEquipableItemType(param_1);
    if (cVar1 == '\0') {
      if (*(int *)(param_1 + 2) == *(int *)(this + param_2 * 0x3d + 6)) {
        *(int *)(this + param_2 * 0x3d + 0xb) =
             *(int *)(this + param_2 * 0x3d + 0xb) + *(int *)(param_1 + 7);
        local_10 = param_2;
      }
      else {
        iVar2 = param_2 * 0x3d;
        *(undefined4 *)(this + iVar2 + 4) = *(undefined4 *)param_1;
        *(undefined4 *)(this + iVar2 + 8) = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)(this + iVar2 + 0xc) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(this + iVar2 + 0x10) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(this + iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(this + iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(this + iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)(this + iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(this + iVar2 + 0x24) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(this + iVar2 + 0x28) = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(this + iVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(this + iVar2 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(this + iVar2 + 0x34) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(this + iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(this + iVar2 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
        this[iVar2 + 0x40] = *(CAccountCargo *)(param_1 + 0x3c);
        local_10 = param_2;
      }
    }
    else if (*(int *)(this + param_2 * 0x3d + 6) == 0) {
      iVar2 = param_2 * 0x3d;
      *(undefined4 *)(this + iVar2 + 4) = *(undefined4 *)param_1;
      *(undefined4 *)(this + iVar2 + 8) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(this + iVar2 + 0xc) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(this + iVar2 + 0x10) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(this + iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(this + iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(this + iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(this + iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(this + iVar2 + 0x24) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(this + iVar2 + 0x28) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(this + iVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(this + iVar2 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(this + iVar2 + 0x34) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(this + iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(this + iVar2 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
      this[iVar2 + 0x40] = *(CAccountCargo *)(param_1 + 0x3c);
      local_10 = param_2;
    }
    this[0xd64] = (CAccountCargo)0x1;
  }
  else {
    local_10 = -1;
  }
  return local_10;
}
```
