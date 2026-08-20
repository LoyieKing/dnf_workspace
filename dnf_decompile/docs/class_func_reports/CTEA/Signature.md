# Signature

`_ZN4CTEA9SignatureEPc`

`CTEA::Signature(char*)`

| 类 | 地址 |
|---|---|
| `CTEA` | `0x080c35ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c35ec  _ZN4CTEA9SignatureEPc
#           CTEA::Signature(char*)
# range [0x080c35ec, 0x080c3723]
080c35ec +0x000:  push   %ebp
080c35ed +0x001:  mov    %esp,%ebp
080c35ef +0x003:  push   %esi
080c35f0 +0x004:  push   %ebx
080c35f1 +0x005:  sub    $0xa0,%esp
080c35f7 +0x00b:  lea    -0x23(%ebp),%eax
080c35fa +0x00e:  mov    $0x17,%edx
080c35ff +0x013:  mov    $0x0,%ecx
080c3604 +0x018:  mov    %eax,%ebx
080c3606 +0x01a:  and    $0x1,%ebx
080c3609 +0x01d:  test   %ebx,%ebx
080c360b +0x01f:  je     080c3615 <+0x29>
080c360d +0x021:  mov    %cl,(%eax)
080c360f +0x023:  add    $0x1,%eax
080c3612 +0x026:  sub    $0x1,%edx
080c3615 +0x029:  mov    %eax,%ebx
080c3617 +0x02b:  and    $0x2,%ebx
080c361a +0x02e:  test   %ebx,%ebx
080c361c +0x030:  je     080c3627 <+0x3b>
080c361e +0x032:  mov    %cx,(%eax)
080c3621 +0x035:  add    $0x2,%eax
080c3624 +0x038:  sub    $0x2,%edx
080c3627 +0x03b:  mov    %edx,%esi
080c3629 +0x03d:  and    $0xfffffffc,%esi
080c362c +0x040:  mov    $0x0,%ebx
080c3631 +0x045:  mov    %ecx,(%eax,%ebx,1)
080c3634 +0x048:  add    $0x4,%ebx
080c3637 +0x04b:  cmp    %esi,%ebx
080c3639 +0x04d:  jb     080c3631 <+0x45>
080c363b +0x04f:  add    %ebx,%eax
080c363d +0x051:  mov    %edx,%ebx
080c363f +0x053:  and    $0x2,%ebx
080c3642 +0x056:  test   %ebx,%ebx
080c3644 +0x058:  je     080c364c <+0x60>
080c3646 +0x05a:  mov    %cx,(%eax)
080c3649 +0x05d:  add    $0x2,%eax
080c364c +0x060:  and    $0x1,%edx
080c364f +0x063:  test   %edx,%edx
080c3651 +0x065:  je     080c3658 <+0x6c>
080c3653 +0x067:  mov    %cl,(%eax)
080c3655 +0x069:  add    $0x1,%eax
080c3658 +0x06c:  movb   $0x54,-0x23(%ebp)
080c365c +0x070:  movb   $0x45,-0x22(%ebp)
080c3660 +0x074:  movb   $0x41,-0x21(%ebp)
080c3664 +0x078:  movb   $0x0,-0x20(%ebp)
080c3668 +0x07c:  lea    -0x23(%ebp),%eax
080c366b +0x07f:  mov    %eax,(%esp)
080c366e +0x082:  call   0807e3b0 <_init+0xca8>
080c3673 +0x087:  mov    %eax,-0xc(%ebp)
080c3676 +0x08a:  mov    0x8(%ebp),%eax
080c3679 +0x08d:  mov    0xc(%eax),%eax
080c367c +0x090:  mov    %eax,%edx
080c367e +0x092:  mov    0x8(%ebp),%eax
080c3681 +0x095:  lea    0x18(%eax),%ecx
080c3684 +0x098:  mov    -0xc(%ebp),%ebx
080c3687 +0x09b:  lea    -0x23(%ebp),%eax
080c368a +0x09e:  add    %ebx,%eax
080c368c +0x0a0:  mov    %edx,0x8(%esp)
080c3690 +0x0a4:  mov    %ecx,0x4(%esp)
080c3694 +0x0a8:  mov    %eax,(%esp)
080c3697 +0x0ab:  call   0807d8a0 <_init+0x198>
080c369c +0x0b0:  mov    0x8(%ebp),%eax
080c369f +0x0b3:  mov    0x14(%eax),%ecx
080c36a2 +0x0b6:  mov    0x8(%ebp),%eax
080c36a5 +0x0b9:  mov    0x10(%eax),%edx
080c36a8 +0x0bc:  mov    0x8(%ebp),%eax
080c36ab +0x0bf:  mov    0xc(%eax),%eax
080c36ae +0x0c2:  mov    %eax,%ebx
080c36b0 +0x0c4:  mov    -0xc(%ebp),%eax
080c36b3 +0x0c7:  add    %eax,%ebx
080c36b5 +0x0c9:  lea    -0x23(%ebp),%eax
080c36b8 +0x0cc:  add    %ebx,%eax
080c36ba +0x0ce:  mov    %ecx,0xc(%esp)
080c36be +0x0d2:  mov    %edx,0x8(%esp)
080c36c2 +0x0d6:  movl   $"%d%d",0x4(%esp)
080c36ca +0x0de:  mov    %eax,(%esp)
080c36cd +0x0e1:  call   0807e440 <_init+0xd38>
080c36d2 +0x0e6:  lea    -0x90(%ebp),%eax
080c36d8 +0x0ec:  mov    %eax,(%esp)
080c36db +0x0ef:  call   080bb69c <_ZN4CSHAC1Ev>  ; CSHA::CSHA()
080c36e0 +0x0f4:  lea    -0x23(%ebp),%eax
080c36e3 +0x0f7:  mov    %eax,(%esp)
080c36e6 +0x0fa:  call   0807e3b0 <_init+0xca8>
080c36eb +0x0ff:  mov    %eax,0x8(%esp)
080c36ef +0x103:  lea    -0x23(%ebp),%eax
080c36f2 +0x106:  mov    %eax,0x4(%esp)
080c36f6 +0x10a:  lea    -0x90(%ebp),%eax
080c36fc +0x110:  mov    %eax,(%esp)
080c36ff +0x113:  call   080bb708 <_ZN4CSHA7AddDataEPKci>  ; CSHA::AddData(char const*, int)
080c3704 +0x118:  mov    0xc(%ebp),%eax
080c3707 +0x11b:  mov    %eax,0x4(%esp)
080c370b +0x11f:  lea    -0x90(%ebp),%eax
080c3711 +0x125:  mov    %eax,(%esp)
080c3714 +0x128:  call   080bb85e <_ZN4CSHA11FinalDigestEPc>  ; CSHA::FinalDigest(char*)
080c3719 +0x12d:  add    $0xa0,%esp
080c371f +0x133:  pop    %ebx
080c3720 +0x134:  pop    %esi
080c3721 +0x135:  pop    %ebp
080c3722 +0x136:  ret
080c3723 +0x137:  nop
```

## 反编译 C

```c
// CTEA::Signature @ 0x80c35ec

/* CTEA::Signature(char*) */

void __thiscall CTEA::Signature(CTEA *this,char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  CSHA local_94 [109];
  char local_27 [23];
  size_t local_10;
  
  pcVar2 = local_27;
  uVar4 = 0x17;
  bVar6 = ((uint)pcVar2 & 1) != 0;
  if (bVar6) {
    pcVar2 = local_27 + 1;
    uVar4 = 0x16;
  }
  if (((uint)pcVar2 & 2) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
    uVar4 = uVar4 - 2;
  }
  uVar5 = 0;
  do {
    pcVar1 = pcVar2 + uVar5;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar5 = uVar5 + 4;
  } while (uVar5 < (uVar4 & 0xfffffffc));
  pcVar2 = pcVar2 + uVar5;
  if ((uVar4 & 2) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
  }
  if (!bVar6) {
    *pcVar2 = '\0';
  }
  builtin_strncpy(local_27,"TEA",4);
  local_10 = strlen(local_27);
  memcpy(local_27 + local_10,this + 0x18,*(size_t *)(this + 0xc));
  sprintf(local_27 + *(int *)(this + 0xc) + local_10,"%d%d",*(undefined4 *)(this + 0x10),
          *(undefined4 *)(this + 0x14));
  CSHA::CSHA(local_94);
  sVar3 = strlen(local_27);
  CSHA::AddData(local_94,local_27,sVar3);
  CSHA::FinalDigest(local_94,param_1);
  return;
}
```
