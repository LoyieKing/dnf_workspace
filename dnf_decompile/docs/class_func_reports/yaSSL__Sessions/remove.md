# remove

`_ZN5yaSSL8Sessions6removeEPKh`

`yaSSL::Sessions::remove(unsigned char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::Sessions` | `0x087535d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087535d0  _ZN5yaSSL8Sessions6removeEPKh
#           yaSSL::Sessions::remove(unsigned char const*)
# range [0x087535d0, 0x087536ef]
087535d0 +0x000:  push   %ebp
087535d1 +0x001:  mov    %esp,%ebp
087535d3 +0x003:  push   %edi
087535d4 +0x004:  push   %esi
087535d5 +0x005:  push   %ebx
087535d6 +0x006:  sub    $0x2c,%esp
087535d9 +0x009:  mov    0x8(%ebp),%eax
087535dc +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
087535e1 +0x011:  add    $0xc195b7,%ebx
087535e7 +0x017:  mov    (%eax),%edx
087535e9 +0x019:  test   %edx,%edx
087535eb +0x01b:  je     08753613 <+0x43>
087535ed +0x01d:  mov    0x8(%edx),%eax
087535f0 +0x020:  mov    %edx,-0x1c(%ebp)
087535f3 +0x023:  mov    %eax,(%esp)
087535f6 +0x026:  call   0874e320 <_ZNK5yaSSL11SSL_SESSION5GetIDEv>  ; yaSSL::SSL_SESSION::GetID() const
087535fb +0x02b:  mov    0xc(%ebp),%edi
087535fe +0x02e:  mov    $0x20,%ecx
08753603 +0x033:  mov    -0x1c(%ebp),%edx
08753606 +0x036:  mov    %eax,%esi
08753608 +0x038:  repz cmpsb %es:(%edi),%ds:(%esi)
0875360a +0x03a:  je     08753620 <+0x50>
0875360c +0x03c:  mov    0x4(%edx),%edx
0875360f +0x03f:  test   %edx,%edx
08753611 +0x041:  jne    087535ed <+0x1d>
08753613 +0x043:  add    $0x2c,%esp
08753616 +0x046:  pop    %ebx
08753617 +0x047:  pop    %esi
08753618 +0x048:  pop    %edi
08753619 +0x049:  pop    %ebp
0875361a +0x04a:  ret
0875361b +0x04b:  nop
0875361c +0x04c:  lea    0x0(%esi,%eiz,1),%esi
08753620 +0x050:  mov    0x8(%edx),%esi
08753623 +0x053:  movl   $0x0,0x8(%edx)
0875362a +0x05a:  test   %esi,%esi
0875362c +0x05c:  je     0875363c <+0x6c>
0875362e +0x05e:  mov    %edx,-0x1c(%ebp)
08753631 +0x061:  mov    %esi,(%esp)
08753634 +0x064:  call   08752de0 <_ZN5yaSSL11SSL_SESSIOND1Ev>  ; yaSSL::SSL_SESSION::~SSL_SESSION()
08753639 +0x069:  mov    -0x1c(%ebp),%edx
0875363c +0x06c:  mov    %edx,-0x1c(%ebp)
0875363f +0x06f:  movb   $0x0,0x4(%esp)
08753644 +0x074:  mov    %esi,(%esp)
08753647 +0x077:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0875364c +0x07c:  mov    0x8(%ebp),%ecx
0875364f +0x07f:  mov    -0x1c(%ebp),%edx
08753652 +0x082:  mov    (%ecx),%eax
08753654 +0x084:  cmp    %edx,%eax
08753656 +0x086:  je     08753686 <+0xb6>
08753658 +0x088:  cmp    0x4(%ecx),%edx
0875365b +0x08b:  je     087536b8 <+0xe8>
0875365d +0x08d:  mov    (%edx),%eax
0875365f +0x08f:  mov    0x4(%edx),%ecx
08753662 +0x092:  mov    %ecx,0x4(%eax)
08753665 +0x095:  mov    0x4(%edx),%ecx
08753668 +0x098:  mov    %eax,(%ecx)
0875366a +0x09a:  mov    %edx,(%esp)
0875366d +0x09d:  movb   $0x0,0x4(%esp)
08753672 +0x0a2:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08753677 +0x0a7:  mov    0x8(%ebp),%edx
0875367a +0x0aa:  subl   $0x1,0x8(%edx)
0875367e +0x0ae:  add    $0x2c,%esp
08753681 +0x0b1:  pop    %ebx
08753682 +0x0b2:  pop    %esi
08753683 +0x0b3:  pop    %edi
08753684 +0x0b4:  pop    %ebp
08753685 +0x0b5:  ret
08753686 +0x0b6:  cmp    0x4(%ecx),%edx
08753689 +0x0b9:  je     087536dd <+0x10d>
0875368b +0x0bb:  mov    0x4(%edx),%edx
0875368e +0x0be:  mov    0x8(%ebp),%ecx
08753691 +0x0c1:  mov    %edx,(%ecx)
08753693 +0x0c3:  movl   $0x0,(%edx)
08753699 +0x0c9:  mov    %eax,(%esp)
0875369c +0x0cc:  movb   $0x0,0x4(%esp)
087536a1 +0x0d1:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
087536a6 +0x0d6:  mov    0x8(%ebp),%eax
087536a9 +0x0d9:  subl   $0x1,0x8(%eax)
087536ad +0x0dd:  jmp    08753613 <+0x43>
087536b2 +0x0e2:  lea    0x0(%esi),%esi
087536b8 +0x0e8:  mov    (%edx),%eax
087536ba +0x0ea:  mov    %eax,0x4(%ecx)
087536bd +0x0ed:  movl   $0x0,0x4(%eax)
087536c4 +0x0f4:  movb   $0x0,0x4(%esp)
087536c9 +0x0f9:  mov    %edx,(%esp)
087536cc +0x0fc:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
087536d1 +0x101:  mov    0x8(%ebp),%eax
087536d4 +0x104:  subl   $0x1,0x8(%eax)
087536d8 +0x108:  jmp    08753613 <+0x43>
087536dd +0x10d:  movl   $0x0,0x4(%ecx)
087536e4 +0x114:  movl   $0x0,(%ecx)
087536ea +0x11a:  jmp    08753699 <+0xc9>
087536ec +0x11c:  nop
087536ed +0x11d:  nop
087536ee +0x11e:  nop
087536ef +0x11f:  nop
```

## 反编译 C

```c
// yaSSL::Sessions::remove @ 0x87535d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Sessions::remove(unsigned char const*) */

void __thiscall yaSSL::Sessions::remove(Sessions *this,uchar *param_1)

{
  int *piVar1;
  SSL_SESSION *this_00;
  int *piVar2;
  undefined4 *puVar3;
  uchar *puVar4;
  int iVar5;
  uchar *puVar6;
  undefined1 uVar7;
  byte bVar8;
  
  bVar8 = 0;
  piVar1 = *(int **)this;
  do {
    uVar7 = piVar1 == (int *)0x0;
    if ((bool)uVar7) {
      return;
    }
    puVar4 = (uchar *)SSL_SESSION::GetID((SSL_SESSION *)piVar1[2]);
    iVar5 = 0x20;
    puVar6 = param_1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      uVar7 = *puVar4 == *puVar6;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    } while ((bool)uVar7);
    if ((bool)uVar7) {
      this_00 = (SSL_SESSION *)piVar1[2];
      piVar1[2] = 0;
      if (this_00 != (SSL_SESSION *)0x0) {
        SSL_SESSION::~SSL_SESSION(this_00);
      }
      operator_delete(this_00,0);
      piVar2 = *(int **)this;
      if (piVar2 != piVar1) {
        if (piVar1 == *(int **)(this + 4)) {
          iVar5 = *piVar1;
          *(int *)(this + 4) = iVar5;
          *(undefined4 *)(iVar5 + 4) = 0;
          operator_delete__(piVar1,0);
          *(int *)(this + 8) = *(int *)(this + 8) + -1;
          return;
        }
        iVar5 = *piVar1;
        *(int *)(iVar5 + 4) = piVar1[1];
        *(int *)piVar1[1] = iVar5;
        operator_delete__(piVar1,0);
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
        return;
      }
      if (piVar1 == *(int **)(this + 4)) {
        *(undefined4 *)(this + 4) = 0;
        *(undefined4 *)this = 0;
      }
      else {
        puVar3 = (undefined4 *)piVar1[1];
        *(undefined4 **)this = puVar3;
        *puVar3 = 0;
      }
      operator_delete__(piVar2,0);
      *(int *)(this + 8) = *(int *)(this + 8) + -1;
      return;
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}
```
