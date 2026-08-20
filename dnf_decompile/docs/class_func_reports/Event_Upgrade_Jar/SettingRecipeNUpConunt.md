# SettingRecipeNUpConunt

`_ZN17Event_Upgrade_Jar22SettingRecipeNUpConuntEiR14upgrade_info_th`

`Event_Upgrade_Jar::SettingRecipeNUpConunt(int, upgrade_info_t&, unsigned char)`

| 类 | 地址 |
|---|---|
| `Event_Upgrade_Jar` | `0x080f4dac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f4dac  _ZN17Event_Upgrade_Jar22SettingRecipeNUpConuntEiR14upgrade_info_th
#           Event_Upgrade_Jar::SettingRecipeNUpConunt(int, upgrade_info_t&, unsigned char)
# range [0x080f4dac, 0x080f4ee1]
080f4dac +0x000:  push   %ebp
080f4dad +0x001:  mov    %esp,%ebp
080f4daf +0x003:  push   %ebx
080f4db0 +0x004:  sub    $0x34,%esp
080f4db3 +0x007:  mov    0x14(%ebp),%eax
080f4db6 +0x00a:  mov    %al,-0x1c(%ebp)
080f4db9 +0x00d:  mov    0x8(%ebp),%eax
080f4dbc +0x010:  mov    0x84(%eax),%eax
080f4dc2 +0x016:  test   %eax,%eax
080f4dc4 +0x018:  je     080f4edb <+0x12f>
080f4dca +0x01e:  mov    0x8(%ebp),%eax
080f4dcd +0x021:  mov    0x84(%eax),%eax
080f4dd3 +0x027:  cmp    $0x1,%eax
080f4dd6 +0x02a:  jne    080f4e5f <+0xb3>
080f4ddc +0x030:  mov    0x10(%ebp),%eax
080f4ddf +0x033:  movl   $0x0,0x34(%eax)
080f4de6 +0x03a:  mov    0x10(%ebp),%eax
080f4de9 +0x03d:  movl   $0x1,0x30(%eax)
080f4df0 +0x044:  movl   $0x0,-0xc(%ebp)
080f4df7 +0x04b:  jmp    080f4e45 <+0x99>
080f4df9 +0x04d:  mov    0xc(%ebp),%ebx
080f4dfc +0x050:  mov    -0xc(%ebp),%eax
080f4dff +0x053:  mov    0x8(%ebp),%edx
080f4e02 +0x056:  add    $0x34,%edx
080f4e05 +0x059:  mov    %eax,0x4(%esp)
080f4e09 +0x05d:  mov    %edx,(%esp)
080f4e0c +0x060:  call   080f5684 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x635>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x635
080f4e11 +0x065:  mov    (%eax),%eax
080f4e13 +0x067:  cmp    %eax,%ebx
080f4e15 +0x069:  sete   %al
080f4e18 +0x06c:  test   %al,%al
080f4e1a +0x06e:  je     080f4e41 <+0x95>
080f4e1c +0x070:  mov    -0xc(%ebp),%eax
080f4e1f +0x073:  mov    0x8(%ebp),%edx
080f4e22 +0x076:  add    $0x34,%edx
080f4e25 +0x079:  mov    %eax,0x4(%esp)
080f4e29 +0x07d:  mov    %edx,(%esp)
080f4e2c +0x080:  call   080f5684 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x635>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x635
080f4e31 +0x085:  mov    (%eax),%eax
080f4e33 +0x087:  mov    %eax,%edx
080f4e35 +0x089:  mov    0x10(%ebp),%eax
080f4e38 +0x08c:  mov    %edx,0x2c(%eax)
080f4e3b +0x08f:  nop
080f4e3c +0x090:  jmp    080f4ecc <+0x120>
080f4e41 +0x095:  addl   $0x1,-0xc(%ebp)
080f4e45 +0x099:  mov    0x8(%ebp),%eax
080f4e48 +0x09c:  add    $0x34,%eax
080f4e4b +0x09f:  mov    %eax,(%esp)
080f4e4e +0x0a2:  call   080f5604 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5b5>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5b5
080f4e53 +0x0a7:  cmp    -0xc(%ebp),%eax
080f4e56 +0x0aa:  setg   %al
080f4e59 +0x0ad:  test   %al,%al
080f4e5b +0x0af:  jne    080f4df9 <+0x4d>
080f4e5d +0x0b1:  jmp    080f4ecc <+0x120>
080f4e5f +0x0b3:  mov    0x8(%ebp),%eax
080f4e62 +0x0b6:  mov    0x84(%eax),%eax
080f4e68 +0x0bc:  cmp    $0x2,%eax
080f4e6b +0x0bf:  jne    080f4ecc <+0x120>
080f4e6d +0x0c1:  mov    0x10(%ebp),%eax
080f4e70 +0x0c4:  mov    0x34(%eax),%eax
080f4e73 +0x0c7:  mov    %eax,-0x20(%ebp)
080f4e76 +0x0ca:  fildl  -0x20(%ebp)
080f4e79 +0x0cd:  fstps  -0x28(%ebp)
080f4e7c +0x0d0:  mov    0x8(%ebp),%eax
080f4e7f +0x0d3:  mov    %eax,(%esp)
080f4e82 +0x0d6:  call   080f4d0c <_ZNK17Event_Upgrade_Jar23_getDiscountRate_NewNPCEv>  ; Event_Upgrade_Jar::_getDiscountRate_NewNPC() const
080f4e87 +0x0db:  fmuls  -0x28(%ebp)
080f4e8a +0x0de:  fnstcw -0x22(%ebp)
080f4e8d +0x0e1:  movzwl -0x22(%ebp),%eax
080f4e91 +0x0e5:  mov    $0xc,%ah
080f4e93 +0x0e7:  mov    %ax,-0x24(%ebp)
080f4e97 +0x0eb:  fldcw  -0x24(%ebp)
080f4e9a +0x0ee:  fistpl -0x20(%ebp)
080f4e9d +0x0f1:  fldcw  -0x22(%ebp)
080f4ea0 +0x0f4:  mov    -0x20(%ebp),%edx
080f4ea3 +0x0f7:  mov    0x10(%ebp),%eax
080f4ea6 +0x0fa:  mov    %edx,0x34(%eax)
080f4ea9 +0x0fd:  movzbl -0x1c(%ebp),%eax
080f4ead +0x101:  mov    %eax,0x4(%esp)
080f4eb1 +0x105:  mov    0x8(%ebp),%eax
080f4eb4 +0x108:  mov    %eax,(%esp)
080f4eb7 +0x10b:  call   080f4ccc <_ZN17Event_Upgrade_Jar24_getMeterialCount_NewNPCEj>  ; Event_Upgrade_Jar::_getMeterialCount_NewNPC(unsigned int)
080f4ebc +0x110:  mov    0x10(%ebp),%edx
080f4ebf +0x113:  mov    %eax,0x30(%edx)
080f4ec2 +0x116:  mov    0x10(%ebp),%eax
080f4ec5 +0x119:  movl   $0x28be7b,0x2c(%eax)
080f4ecc +0x120:  mov    0x8(%ebp),%eax
080f4ecf +0x123:  movzbl -0x1c(%ebp),%edx
080f4ed3 +0x127:  mov    %dl,0x88(%eax)
080f4ed9 +0x12d:  jmp    080f4edc <+0x130>
080f4edb +0x12f:  nop
080f4edc +0x130:  add    $0x34,%esp
080f4edf +0x133:  pop    %ebx
080f4ee0 +0x134:  pop    %ebp
080f4ee1 +0x135:  ret
```

## 反编译 C

```c
// Event_Upgrade_Jar::SettingRecipeNUpConunt @ 0x80f4dac

/* Event_Upgrade_Jar::SettingRecipeNUpConunt(int, upgrade_info_t&, unsigned char) */

void __thiscall
Event_Upgrade_Jar::SettingRecipeNUpConunt
          (Event_Upgrade_Jar *this,int param_1,upgrade_info_t *param_2,uchar param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longdouble lVar5;
  uint local_10;
  
  if (*(int *)(this + 0x84) != 0) {
    if (*(int *)(this + 0x84) == 1) {
      *(undefined4 *)(param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 0x30) = 1;
      for (local_10 = 0;
          iVar3 = std::vector<unsigned_long,std::allocator<unsigned_long>>::size
                            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34)),
          (int)local_10 < iVar3; local_10 = local_10 + 1) {
        piVar1 = (int *)std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[]
                                  ((vector<unsigned_long,std::allocator<unsigned_long>> *)
                                   (this + 0x34),local_10);
        if (param_1 == *piVar1) {
          puVar2 = (undefined4 *)
                   std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[]
                             ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34),
                              local_10);
          *(undefined4 *)(param_2 + 0x2c) = *puVar2;
          break;
        }
      }
    }
    else if (*(int *)(this + 0x84) == 2) {
      iVar3 = *(int *)(param_2 + 0x34);
      lVar5 = (longdouble)_getDiscountRate_NewNPC(this);
      *(int *)(param_2 + 0x34) = (int)ROUND(lVar5 * (longdouble)iVar3);
      uVar4 = _getMeterialCount_NewNPC(this,(uint)param_3);
      *(undefined4 *)(param_2 + 0x30) = uVar4;
      *(undefined4 *)(param_2 + 0x2c) = 0x28be7b;
    }
    this[0x88] = (Event_Upgrade_Jar)param_3;
  }
  return;
}
```
