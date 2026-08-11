# _ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E

`CNRDItemInfoList::Load(char const*, bool (*)(char*, char*))`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x807cd9e` | `0x4b1` | `0x808085c` | `0x4b3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,311 +1,314 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x66c,%esp
-movl   $0x104,-0x40(%ebp)
+movb   $0x0,-0x35(%ebp)
 cmpl   $0x0,0xc(%ebp)
-jne    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x23>
-mov    $0x0,%eax
-jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x4a6>
+jne    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x1f>
+movb   $0x0,-0x35(%ebp)
+jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x4a4>
 mov    0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x104,0x4(%esp)
-lea    -0x264(%ebp),%eax
+lea    -0x260(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z9ss_strcpyPcjPKc>
-lea    -0x264(%ebp),%eax
+lea    -0x260(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z32findFileWithServerTokenInAuctionPc>
 movl   $"rb",0x4(%esp)
-lea    -0x264(%ebp),%eax
+lea    -0x260(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fopen>
 mov    %eax,-0x3c(%ebp)
 cmpl   $0x0,-0x3c(%ebp)
-jne    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x77>
-mov    $0x0,%eax
-jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x4a6>
+jne    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x72>
+movb   $0x0,-0x35(%ebp)
+jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x4a4>
 movb   $0x1,-0x35(%ebp)
-movl   $0x0,-0x34(%ebp)
-lea    -0x664(%ebp),%ebx
+lea    -0x660(%ebp),%ebx
 mov    $0x0,%eax
 mov    $0x100,%edx
 mov    %ebx,%edi
 mov    %edx,%ecx
 rep stos %eax,%es:(%edi)
-movl   $0x0,-0x30(%ebp)
+movl   $0x0,-0x34(%ebp)
 movl   $0x2,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fseek>
 mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <ftell>
+mov    %eax,-0x34(%ebp)
+movl   $0x0,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <fseek>
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Znaj>
 mov    %eax,-0x30(%ebp)
-movl   $0x0,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <fseek>
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_Znaj>
-mov    %eax,-0x2c(%ebp)
-mov    -0x30(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    -0x3c(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <fread>
+mov    -0x30(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
 mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <fread>
+movzbl (%eax),%eax
+test   %al,%al
+je     <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x482>
+mov    -0x2c(%ebp),%edx
+mov    -0x30(%ebp),%eax
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+cmp    -0x34(%ebp),%eax
+jge    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x482>
+lea    -0x660(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x14d>
 mov    -0x2c(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x457>
-lea    -0x664(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x13b>
-mov    -0x28(%ebp),%eax
 movzbl (%eax),%edx
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %dl,(%eax)
-addl   $0x1,-0x24(%ebp)
-addl   $0x1,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+addl   $0x1,-0x20(%ebp)
+addl   $0x1,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0xa,%al
 setne  %al
 test   %al,%al
-jne    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x128>
-addl   $0x1,-0x28(%ebp)
-mov    -0x24(%ebp),%eax
+jne    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x13a>
+addl   $0x1,-0x2c(%ebp)
+mov    -0x20(%ebp),%eax
 movb   $0x0,(%eax)
-subl   $0x1,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+subl   $0x1,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0xd,%al
-jne    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x168>
-mov    -0x24(%ebp),%eax
+jne    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x17a>
+mov    -0x20(%ebp),%eax
 movb   $0x0,(%eax)
-lea    -0x664(%ebp),%eax
+lea    -0x660(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 cmp    $0x1,%eax
-ja     <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x19e>
+ja     <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x1b0>
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x664(%ebp),%eax
+lea    -0x660(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x457>
-movl   $0x0,-0x20(%ebp)
-lea    -0x664(%ebp),%eax
-mov    %eax,-0x5c(%ebp)
+jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x10c>
+nop
+movl   $0x0,-0x28(%ebp)
+lea    -0x660(%ebp),%eax
+mov    %eax,-0x58(%ebp)
 movl   $0x24,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CNRDItemInfoList10STItemInfoC1Ev>
-jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x1e0>
+jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x1f3>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
-mov    %eax,-0x60(%ebp)
-mov    -0x60(%ebp),%eax
+mov    %eax,-0x5c(%ebp)
+mov    -0x5c(%ebp),%eax
 test   %eax,%eax
-jne    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x1f5>
-movb   $0x0,-0x35(%ebp)
-jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x486>
-movl   $0x20,0x8(%esp)
-movl   $0x60,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_Z9NextTokenPPKccc>
-mov    %eax,-0x20(%ebp)
-mov    -0x60(%ebp),%ebx
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x481>
+movl   $0x20,0x8(%esp)
+movl   $0x60,0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z9NextTokenPPKccc>
+mov    %eax,-0x28(%ebp)
+mov    -0x5c(%ebp),%ebx
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,(%ebx)
 movl   $0x20,0x8(%esp)
 movl   $0x60,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_Z9NextTokenPPKccc>
-mov    %eax,-0x20(%ebp)
-mov    -0x60(%ebp),%ebx
-mov    -0x20(%ebp),%eax
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z9NextTokenPPKccc>
+mov    %eax,-0x28(%ebp)
+mov    -0x5c(%ebp),%ebx
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,0x4(%ebx)
 movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x29c>
-movl   $0x20,0x8(%esp)
-movl   $0x60,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_Z9NextTokenPPKccc>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %eax,-0x34(%ebp)
-mov    -0x60(%ebp),%edx
+jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x2aa>
+movl   $0x20,0x8(%esp)
+movl   $0x60,0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z9NextTokenPPKccc>
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %eax,-0x24(%ebp)
+mov    -0x5c(%ebp),%edx
 mov    -0x1c(%ebp),%eax
-cmpl   $0x0,-0x34(%ebp)
+cmpl   $0x0,-0x24(%ebp)
 setne  %cl
 mov    %cl,0x8(%edx,%eax,1)
 addl   $0x1,-0x1c(%ebp)
 cmpl   $0xa,-0x1c(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x25b>
-movl   $0x20,0x8(%esp)
-movl   $0x60,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_Z9NextTokenPPKccc>
-mov    %eax,-0x20(%ebp)
-mov    -0x60(%ebp),%ebx
-mov    -0x20(%ebp),%eax
+jne    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x269>
+movl   $0x20,0x8(%esp)
+movl   $0x60,0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z9NextTokenPPKccc>
+mov    %eax,-0x28(%ebp)
+mov    -0x5c(%ebp),%ebx
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,0x14(%ebx)
-lea    -0x160(%ebp),%ebx
+lea    -0x15c(%ebp),%ebx
 mov    $0x0,%eax
 mov    $0x40,%edx
 mov    %ebx,%edi
 mov    %edx,%ecx
 rep stos %eax,%es:(%edi)
 movl   $0x20,0x8(%esp)
 movl   $0x60,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_Z9NextTokenPPKccc>
-lea    -0x160(%ebp),%edx
-mov    %edx,0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z9NextTokenPPKccc>
+mov    %eax,-0x28(%ebp)
+lea    -0x15c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 mov    0x10(%ebp),%eax
 call   *%eax
-mov    -0x60(%ebp),%eax
+mov    -0x5c(%ebp),%eax
 lea    0x18(%eax),%edx
-lea    -0x160(%ebp),%eax
+lea    -0x15c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSsaSEPKc>
 movl   $0x100,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x160(%ebp),%eax
+lea    -0x15c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movl   $0x20,0x8(%esp)
 movl   $0x60,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_Z9NextTokenPPKccc>
-lea    -0x160(%ebp),%edx
-mov    %edx,0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z9NextTokenPPKccc>
+mov    %eax,-0x28(%ebp)
+lea    -0x15c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 mov    0x10(%ebp),%eax
 call   *%eax
-mov    -0x60(%ebp),%eax
+mov    -0x5c(%ebp),%eax
 lea    0x1c(%eax),%edx
-lea    -0x160(%ebp),%eax
+lea    -0x15c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSsaSEPKc>
 movl   $0x20,0x8(%esp)
 movl   $0x60,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_Z9NextTokenPPKccc>
-mov    %eax,-0x20(%ebp)
-mov    -0x60(%ebp),%ebx
-mov    -0x20(%ebp),%eax
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z9NextTokenPPKccc>
+mov    %eax,-0x28(%ebp)
+mov    -0x5c(%ebp),%ebx
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %ax,0x20(%ebx)
-mov    -0x60(%ebp),%eax
+mov    -0x5c(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK16CNRDItemInfoList11GetItemInfoEi>
 test   %eax,%eax
-setne  %al
-test   %al,%al
-jne    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x439>
-mov    -0x60(%ebp),%eax
+jne    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x406>
+mov    -0x5c(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-jle    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x439>
-mov    -0x60(%ebp),%eax
+jle    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x406>
+mov    $0x1,%eax
+jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x40b>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x45e>
+mov    -0x5c(%ebp),%eax
 mov    %eax,%edx
-lea    -0x48(%ebp),%eax
-lea    -0x60(%ebp),%ecx
+lea    -0x44(%ebp),%eax
+lea    -0x5c(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRiRPN16CNRDItemInfoList10STItemInfoEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 sub    $0x4,%esp
-lea    -0x48(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x44(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiPN16CNRDItemInfoList10STItemInfoEEC1IiS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
-lea    -0x58(%ebp),%eax
-lea    -0x50(%ebp),%edx
+lea    -0x54(%ebp),%eax
+lea    -0x4c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiPN16CNRDItemInfoList10STItemInfoESt4lessIiESaISt4pairIKiS2_EEE6insertERKS7_>
 sub    $0x4,%esp
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x664(%ebp),%eax
+lea    -0x660(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-mov    -0x28(%ebp),%eax
-movzbl (%eax),%eax
-test   %al,%al
-je     <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x479>
-mov    -0x28(%ebp),%edx
-mov    -0x2c(%ebp),%eax
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-cmp    -0x30(%ebp),%eax
-jge    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x479>
-mov    $0x1,%eax
-jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x47e>
-mov    $0x0,%eax
-test   %al,%al
-jne    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x11d>
-cmpl   $0x0,-0x2c(%ebp)
-je     <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x497>
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x10c>
+nop
+cmpl   $0x0,-0x30(%ebp)
+je     <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x499>
+cmpl   $0x0,-0x30(%ebp)
+je     <T> <_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E+0x499>
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdaPv>
 mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fclose>
 movzbl -0x35(%ebp),%eax
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: bool Load(CNRDItemInfoList * this, TCHAR * szFilePath, ConvertFunction
   convertor) */

bool __thiscall
CNRDItemInfoList::_ZN16CNRDItemInfoList4LoadEPKcPFbPcS2_E
          (CNRDItemInfoList *this,TCHAR *szFilePath,ConvertFunction convertor)

{
  bool bVar1;
  size_t sVar2;
  STItemInfo *pSVar3;
  ENUM_RARITY EVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  byte bVar8;
  char local_669 [1025];
  char local_268 [260];
  char local_164 [256];
  STItemInfo *local_64;
  char *local_60;
  undefined1 local_5c [16];
  pair<int,_CNRDItemInfoList::STItemInfo*> local_4c;
  undefined4 local_44;
  FILE *local_40;
  undefined1 local_39;
  int local_38;
  uint local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  int local_20;
  
  bVar8 = 0;
                    /* Unresolved local var: int MAX_PATH_@[???]
                       Unresolved local var: TCHAR[260] newFilePath@[???]
                       Unresolved local var: FILE * pFile@[???]
                       Unresolved local var: bool result@[???]
                       Unresolved local var: int intData@[???]
                       Unresolved local var: char[1024] szLineBuff@[???]
                       Unresolved local var: int fileSize@[???]
                       Unresolved local var: char * pTotalBuffer@[???]
                       Unresolved local var: char * pTotalPtr@[???] */
  local_44 = 0x104;
  if (szFilePath == (TCHAR *)0x0) {
    local_39 = 0;
  }
  else {
    ss_strcpy(local_268,0x104,szFilePath);
    findFileWithServerTokenInAuction(local_268);
    local_40 = fopen(local_268,"rb");
    if (local_40 == (FILE *)0x0) {
      local_39 = 0;
    }
    else {
      local_39 = 1;
      local_38 = 0;
      puVar7 = (undefined4 *)((int)local_669 + 1);
      for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      local_34 = 0;
      fseek(local_40,0,2);
      local_34 = ftell(local_40);
      fseek(local_40,0,0);
      local_30 = operator_new__(local_34);
      fread(local_30,1,local_34,local_40);
      local_2c = local_30;
      while( true ) {
        while( true ) {
          if ((*local_2c == '\0') || ((int)local_34 <= (int)local_2c - (int)local_30)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_0807d224;
                    /* Unresolved local var: char * pLineBuffPtr@[???]
                       Unresolved local var: char * pszStr@[???]
                       Unresolved local var: char * pszToken@[???]
                       Unresolved local var: STItemInfo * pItemInfo@[???]
                       Unresolved local var: char[256] localeName@[???] */
          local_28 = (char *)((int)local_669 + 1);
          for (; *local_2c != '\n'; local_2c = local_2c + 1) {
            *local_28 = *local_2c;
            local_28 = local_28 + 1;
          }
          local_2c = local_2c + 1;
          *local_28 = '\0';
          local_28 = local_28 + -1;
          if (*local_28 == '\r') {
            *local_28 = '\0';
          }
          sVar2 = strlen((char *)((int)local_669 + 1));
          if (1 < sVar2) break;
          memset((void *)((int)local_669 + 1),0,0x400);
        }
        local_24 = (char *)0x0;
        local_60 = (char *)((int)local_669 + 1);
        pSVar3 = operator_new(0x24);
                    /* try { // try from 0807cf5f to 0807cf63 has its CatchHandler @ 0807cf66 */
        STItemInfo::STItemInfo(pSVar3);
        local_64 = pSVar3;
        if (pSVar3 == (STItemInfo *)0x0) break;
        local_24 = NextToken(&local_60,'`',' ');
        pSVar3 = local_64;
        iVar6 = atoi(local_24);
        pSVar3->nItemIndex_ = iVar6;
        local_24 = NextToken(&local_60,'`',' ');
        pSVar3 = local_64;
        EVar4 = atoi(local_24);
        pSVar3->rarity_ = EVar4;
                    /* Unresolved local var: int i@[???] */
        for (local_20 = 0; local_20 < 0xb; local_20 = local_20 + 1) {
          local_24 = NextToken(&local_60,'`',' ');
          local_38 = atoi(local_24);
          local_64->xaUsableCharacter_[local_20] = local_38 != 0;
        }
        local_24 = NextToken(&local_60,'`',' ');
        pSVar3 = local_64;
        iVar6 = atoi(local_24);
        pSVar3->nOriginalUsableLevel_ = iVar6;
        pcVar5 = local_164;
        for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5[2] = '\0';
          pcVar5[3] = '\0';
          pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
        }
        pcVar5 = NextToken(&local_60,'`',' ');
        (*convertor)(pcVar5,local_164);
        std::string::operator=(&local_64->sName_,local_164);
        memset(local_164,0,0x100);
        pcVar5 = NextToken(&local_60,'`',' ');
        (*convertor)(pcVar5,local_164);
        std::string::operator=(&local_64->sEnglishName_,local_164);
        local_24 = NextToken(&local_60,'`',' ');
        pSVar3 = local_64;
        iVar6 = atoi(local_24);
        pSVar3->category_ = (ushort)iVar6;
        pSVar3 = GetItemInfo(this,local_64->nItemIndex_);
        if ((pSVar3 == (STItemInfo *)0x0) && (0 < local_64->nItemIndex_)) {
          std::make_pair<int&,_CNRDItemInfoList::STItemInfo*&>
                    (&local_4c,&local_64->nItemIndex_,&local_64);
          std::pair<const_int,_CNRDItemInfoList::STItemInfo*>::
          pair<int,_CNRDItemInfoList::STItemInfo*>
                    ((pair<const_int,_CNRDItemInfoList::STItemInfo*> *)(local_5c + 8),&local_4c);
          std::
          map<int,_CNRDItemInfoList::STItemInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_CNRDItemInfoList::STItemInfo*>_>_>
          ::insert((map<int,_CNRDItemInfoList::STItemInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_CNRDItemInfoList::STItemInfo*>_>_>
                    *)local_5c,(pair<const_int,_CNRDItemInfoList::STItemInfo*> *)&this->itemInfoMap_
                  );
        }
        memset((void *)((int)local_669 + 1),0,0x400);
      }
      local_39 = 0;
LAB_0807d224:
      if (local_30 != (char *)0x0) {
        operator_delete__(local_30);
      }
      fclose(local_40);
    }
  }
  return (bool)local_39;
}
```

## 3. 我们的源码函数

定义于 [source/shared/packet/include/Packet_Loading_Time_Report_Statistics.h](source/shared/packet/include/Packet_Loading_Time_Report_Statistics.h)（约第 12 行）：

```cpp
    Packet_Loading_Time_Report_Statistics(): PacketHeader(0xfb0,0x806) {};
```
