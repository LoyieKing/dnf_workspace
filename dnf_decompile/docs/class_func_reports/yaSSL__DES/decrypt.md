# decrypt

`_ZN5yaSSL3DES7decryptEPhPKhj`

`yaSSL::DES::decrypt(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::DES` | `0x0879b670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879b670  _ZN5yaSSL3DES7decryptEPhPKhj
#           yaSSL::DES::decrypt(unsigned char*, unsigned char const*, unsigned int)
# range [0x0879b670, 0x0879b86a]
0879b670 +0x000:  push   %ebp
0879b671 +0x001:  mov    %esp,%ebp
0879b673 +0x003:  push   %edi
0879b674 +0x004:  push   %esi
0879b675 +0x005:  push   %ebx
0879b676 +0x006:  sub    $0x4c,%esp
0879b679 +0x009:  mov    0x8(%ebp),%eax
0879b67c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0879b681 +0x011:  add    $0xbd1517,%ebx
0879b687 +0x017:  mov    0xc(%ebp),%edi
0879b68a +0x01a:  mov    0x14(%ebp),%edx
0879b68d +0x01d:  mov    0x4(%eax),%eax
0879b690 +0x020:  mov    %eax,%esi
0879b692 +0x022:  mov    %eax,%ecx
0879b694 +0x024:  mov    %eax,-0x2c(%ebp)
0879b697 +0x027:  mov    0xec(%eax),%eax
0879b69d +0x02d:  add    $0xb8,%esi
0879b6a3 +0x033:  test   %eax,%eax
0879b6a5 +0x035:  jne    0879b700 <+0x90>
0879b6a7 +0x037:  mov    %edx,%eax
0879b6a9 +0x039:  xor    %edx,%edx
0879b6ab +0x03b:  divl   0xbc(%ecx)
0879b6b1 +0x041:  test   %eax,%eax
0879b6b3 +0x043:  mov    %eax,-0x2c(%ebp)
0879b6b6 +0x046:  je     0879b6f8 <+0x88>
0879b6b8 +0x048:  mov    %edi,%eax
0879b6ba +0x04a:  mov    0x10(%ebp),%ecx
0879b6bd +0x04d:  mov    %esi,%edi
0879b6bf +0x04f:  mov    -0x2c(%ebp),%esi
0879b6c2 +0x052:  lea    0x0(%esi),%esi
0879b6c8 +0x058:  mov    (%edi),%edx
0879b6ca +0x05a:  mov    %eax,-0x38(%ebp)
0879b6cd +0x05d:  mov    %eax,0xc(%esp)
0879b6d1 +0x061:  mov    %ecx,0x4(%esp)
0879b6d5 +0x065:  mov    %ecx,-0x34(%ebp)
0879b6d8 +0x068:  movl   $0x0,0x8(%esp)
0879b6e0 +0x070:  mov    %edi,(%esp)
0879b6e3 +0x073:  call   *0xc(%edx)
0879b6e6 +0x076:  mov    0x4(%edi),%edx
0879b6e9 +0x079:  mov    -0x38(%ebp),%eax
0879b6ec +0x07c:  mov    -0x34(%ebp),%ecx
0879b6ef +0x07f:  add    %edx,%eax
0879b6f1 +0x081:  add    %edx,%ecx
0879b6f3 +0x083:  sub    $0x1,%esi
0879b6f6 +0x086:  jne    0879b6c8 <+0x58>
0879b6f8 +0x088:  add    $0x4c,%esp
0879b6fb +0x08b:  pop    %ebx
0879b6fc +0x08c:  pop    %esi
0879b6fd +0x08d:  pop    %edi
0879b6fe +0x08e:  pop    %ebp
0879b6ff +0x08f:  ret
0879b700 +0x090:  cmp    $0x1,%eax
0879b703 +0x093:  jne    0879b6f8 <+0x88>
0879b705 +0x095:  mov    -0x2c(%ebp),%ecx
0879b708 +0x098:  mov    0xe8(%ecx),%eax
0879b70e +0x09e:  test   %eax,%eax
0879b710 +0x0a0:  jne    0879b790 <+0x120>
0879b712 +0x0a2:  mov    %edx,%eax
0879b714 +0x0a4:  xor    %edx,%edx
0879b716 +0x0a6:  divl   0xbc(%ecx)
0879b71c +0x0ac:  test   %eax,%eax
0879b71e +0x0ae:  mov    %eax,-0x30(%ebp)
0879b721 +0x0b1:  je     0879b6f8 <+0x88>
0879b723 +0x0b3:  mov    0xbc(%ecx),%eax
0879b729 +0x0b9:  mov    0x10(%ebp),%ecx
0879b72c +0x0bc:  lea    0x0(%esi,%eiz,1),%esi
0879b730 +0x0c0:  mov    %ecx,0x4(%esp)
0879b734 +0x0c4:  mov    %eax,0x8(%esp)
0879b738 +0x0c8:  mov    0x8(%esi),%eax
0879b73b +0x0cb:  mov    %ecx,-0x34(%ebp)
0879b73e +0x0ce:  mov    %eax,(%esp)
0879b741 +0x0d1:  call   08767410 <_ZN8TaoCrypt6xorbufEPhPKhj>  ; TaoCrypt::xorbuf(unsigned char*, unsigned char const*, unsigned int)
0879b746 +0x0d6:  mov    0x8(%esi),%eax
0879b749 +0x0d9:  mov    (%esi),%edx
0879b74b +0x0db:  movl   $0x0,0x8(%esp)
0879b753 +0x0e3:  mov    %esi,(%esp)
0879b756 +0x0e6:  mov    %eax,0xc(%esp)
0879b75a +0x0ea:  mov    %eax,0x4(%esp)
0879b75e +0x0ee:  call   *0xc(%edx)
0879b761 +0x0f1:  mov    0x8(%esi),%eax
0879b764 +0x0f4:  mov    0x4(%esi),%edx
0879b767 +0x0f7:  mov    %edi,(%esp)
0879b76a +0x0fa:  mov    %eax,0x4(%esp)
0879b76e +0x0fe:  mov    %edx,0x8(%esp)
0879b772 +0x102:  call   0807d8a0 <_init+0x198>
0879b777 +0x107:  mov    0x4(%esi),%eax
0879b77a +0x10a:  mov    -0x34(%ebp),%ecx
0879b77d +0x10d:  add    %eax,%edi
0879b77f +0x10f:  add    %eax,%ecx
0879b781 +0x111:  subl   $0x1,-0x30(%ebp)
0879b785 +0x115:  jne    0879b730 <+0xc0>
0879b787 +0x117:  jmp    0879b6f8 <+0x88>
0879b78c +0x11c:  lea    0x0(%esi,%eiz,1),%esi
0879b790 +0x120:  mov    %edx,%eax
0879b792 +0x122:  xor    %edx,%edx
0879b794 +0x124:  divl   0xbc(%ecx)
0879b79a +0x12a:  test   %eax,%eax
0879b79c +0x12c:  mov    %eax,-0x30(%ebp)
0879b79f +0x12f:  je     0879b6f8 <+0x88>
0879b7a5 +0x135:  mov    0xbc(%ecx),%eax
0879b7ab +0x13b:  lea    -0x28(%ebp),%edx
0879b7ae +0x13e:  mov    0x10(%ebp),%ecx
0879b7b1 +0x141:  mov    %edx,-0x2c(%ebp)
0879b7b4 +0x144:  lea    0x0(%esi,%eiz,1),%esi
0879b7b8 +0x148:  mov    0xc(%esi),%edx
0879b7bb +0x14b:  mov    %ecx,-0x34(%ebp)
0879b7be +0x14e:  mov    %ecx,0x4(%esp)
0879b7c2 +0x152:  mov    %eax,0x8(%esp)
0879b7c6 +0x156:  mov    %edx,(%esp)
0879b7c9 +0x159:  call   0807d8a0 <_init+0x198>
0879b7ce +0x15e:  mov    (%esi),%eax
0879b7d0 +0x160:  mov    %edi,0xc(%esp)
0879b7d4 +0x164:  movl   $0x0,0x8(%esp)
0879b7dc +0x16c:  mov    0xc(%esi),%edx
0879b7df +0x16f:  mov    %esi,(%esp)
0879b7e2 +0x172:  mov    %edx,0x4(%esp)
0879b7e6 +0x176:  call   *0xc(%eax)
0879b7e9 +0x179:  mov    0x4(%esi),%eax
0879b7ec +0x17c:  mov    %eax,0x8(%esp)
0879b7f0 +0x180:  mov    0x8(%esi),%eax
0879b7f3 +0x183:  mov    %edi,(%esp)
0879b7f6 +0x186:  mov    %eax,0x4(%esp)
0879b7fa +0x18a:  call   08767410 <_ZN8TaoCrypt6xorbufEPhPKhj>  ; TaoCrypt::xorbuf(unsigned char*, unsigned char const*, unsigned int)
0879b7ff +0x18f:  mov    0x8(%esi),%eax
0879b802 +0x192:  mov    0x4(%esi),%edx
0879b805 +0x195:  mov    %eax,0x4(%esp)
0879b809 +0x199:  mov    -0x2c(%ebp),%eax
0879b80c +0x19c:  mov    %edx,0x8(%esp)
0879b810 +0x1a0:  mov    %eax,(%esp)
0879b813 +0x1a3:  call   0807d8a0 <_init+0x198>
0879b818 +0x1a8:  mov    0x8(%esi),%edx
0879b81b +0x1ab:  mov    0x4(%esi),%eax
0879b81e +0x1ae:  mov    %edx,-0x3c(%ebp)
0879b821 +0x1b1:  mov    0xc(%esi),%edx
0879b824 +0x1b4:  mov    %eax,0x8(%esp)
0879b828 +0x1b8:  mov    %edx,0x4(%esp)
0879b82c +0x1bc:  mov    -0x3c(%ebp),%edx
0879b82f +0x1bf:  mov    %edx,(%esp)
0879b832 +0x1c2:  call   0807d8a0 <_init+0x198>
0879b837 +0x1c7:  mov    0x4(%esi),%edx
0879b83a +0x1ca:  mov    0xc(%esi),%eax
0879b83d +0x1cd:  mov    %edx,0x8(%esp)
0879b841 +0x1d1:  mov    -0x2c(%ebp),%edx
0879b844 +0x1d4:  mov    %eax,(%esp)
0879b847 +0x1d7:  mov    %edx,0x4(%esp)
0879b84b +0x1db:  call   0807d8a0 <_init+0x198>
0879b850 +0x1e0:  mov    0x4(%esi),%eax
0879b853 +0x1e3:  mov    -0x34(%ebp),%ecx
0879b856 +0x1e6:  add    %eax,%edi
0879b858 +0x1e8:  add    %eax,%ecx
0879b85a +0x1ea:  subl   $0x1,-0x30(%ebp)
0879b85e +0x1ee:  jne    0879b7b8 <+0x148>
0879b864 +0x1f4:  jmp    0879b6f8 <+0x88>
0879b869 +0x1f9:  nop
0879b86a +0x1fa:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::DES::decrypt @ 0x879b670

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES::decrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::DES::decrypt(DES *this,uchar *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  size_t __n;
  int *piVar3;
  uint local_34;
  undefined1 local_2c [28];
  
  iVar1 = *(int *)(this + 4);
  piVar3 = (int *)(iVar1 + 0xb8);
  if (*(int *)(iVar1 + 0xec) == 0) {
    for (uVar2 = param_3 / *(uint *)(iVar1 + 0xbc); uVar2 != 0; uVar2 = uVar2 - 1) {
      (**(code **)(*piVar3 + 0xc))(piVar3,param_2,0,param_1);
      param_1 = param_1 + *(int *)(iVar1 + 0xbc);
      param_2 = param_2 + *(int *)(iVar1 + 0xbc);
    }
  }
  else if (*(int *)(iVar1 + 0xec) == 1) {
    if (*(int *)(iVar1 + 0xe8) == 0) {
      local_34 = param_3 / *(uint *)(iVar1 + 0xbc);
      if (local_34 != 0) {
        uVar2 = *(uint *)(iVar1 + 0xbc);
        do {
          TaoCrypt::xorbuf(*(uchar **)(iVar1 + 0xc0),param_2,uVar2);
          (**(code **)(*piVar3 + 0xc))
                    (piVar3,*(undefined4 *)(iVar1 + 0xc0),0,*(undefined4 *)(iVar1 + 0xc0));
          memcpy(param_1,*(void **)(iVar1 + 0xc0),*(size_t *)(iVar1 + 0xbc));
          uVar2 = *(uint *)(iVar1 + 0xbc);
          param_1 = param_1 + uVar2;
          param_2 = param_2 + uVar2;
          local_34 = local_34 - 1;
        } while (local_34 != 0);
      }
    }
    else {
      local_34 = param_3 / *(uint *)(iVar1 + 0xbc);
      if (local_34 != 0) {
        __n = *(size_t *)(iVar1 + 0xbc);
        do {
          memcpy(*(void **)(iVar1 + 0xc4),param_2,__n);
          (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar1 + 0xc4),0,param_1);
          TaoCrypt::xorbuf(param_1,*(uchar **)(iVar1 + 0xc0),*(uint *)(iVar1 + 0xbc));
          memcpy(local_2c,*(void **)(iVar1 + 0xc0),*(size_t *)(iVar1 + 0xbc));
          memcpy(*(void **)(iVar1 + 0xc0),*(void **)(iVar1 + 0xc4),*(size_t *)(iVar1 + 0xbc));
          memcpy(*(void **)(iVar1 + 0xc4),local_2c,*(size_t *)(iVar1 + 0xbc));
          __n = *(size_t *)(iVar1 + 0xbc);
          param_1 = param_1 + __n;
          param_2 = param_2 + __n;
          local_34 = local_34 - 1;
        } while (local_34 != 0);
      }
    }
  }
  return;
}
```
