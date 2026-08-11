# _ZN15CPowerWarConfig11Parse_TableEPci

`CPowerWarConfig::Parse_Table(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806094a` | `0x348` | `0x807f4c4` | `0x2fe` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,243 +1,221 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+sub    $0x48,%esp
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x23,%al
 jne    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x1a>
 mov    $0x0,%eax
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x346>
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2fc>
 movl   $0x4,0xc(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $" \t\r\n\"",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x4,-0x10(%ebp)
+mov    %eax,-0xc(%ebp)
+cmpl   $0x4,-0xc(%ebp)
 je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x4f>
-cmpl   $0x2,-0x10(%ebp)
-jne    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x341>
-movb   $0x0,-0x9(%ebp)
+cmpl   $0x2,-0xc(%ebp)
+jne    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f7>
 cmpl   $0xa,0x10(%ebp)
-ja     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x320>
+ja     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2d6>
 mov    0x10(%ebp),%eax
 shl    $0x2,%eax
-mov    &data#a4e9f157(.rodata)(%eax),%eax
+mov    &data#9549dbeb(.rodata)(%eax),%eax
 jmp    *%eax
-mov    -0x20(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x4(%eax)
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x5(%eax)
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x6(%eax)
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    0x8(%ebp),%edx
 mov    %eax,0x8(%edx)
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-test   %eax,%eax
-setne  %al
-mov    %al,-0x9(%ebp)
-cmpb   $0x0,-0x9(%ebp)
-je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x327>
-movb   $0x0,-0x27(%ebp)
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+test   %eax,%eax
+je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2dd>
+movb   $0x0,-0x1f(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,-0x1e(%ebp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,-0x1d(%ebp)
+mov    0x8(%ebp),%eax
+lea    0xc(%eax),%edx
+lea    -0x1f(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EE9push_backERKS0_>
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+test   %eax,%eax
+je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2e0>
+movb   $0x1,-0x22(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,-0x21(%ebp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,-0x20(%ebp)
+mov    0x8(%ebp),%eax
+lea    0xc(%eax),%edx
+lea    -0x22(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EE9push_backERKS0_>
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+test   %eax,%eax
+je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2e3>
+movb   $0x2,-0x25(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,-0x24(%ebp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,-0x23(%ebp)
+mov    0x8(%ebp),%eax
+lea    0xc(%eax),%edx
+lea    -0x25(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EE9push_backERKS0_>
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+test   %eax,%eax
+je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2e6>
+movb   $0x3,-0x28(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,-0x27(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %al,-0x26(%ebp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,-0x25(%ebp)
-mov    0x8(%ebp),%eax
-lea    0xc(%eax),%edx
-lea    -0x27(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EE9push_backERKS0_>
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-test   %eax,%eax
-setne  %al
-mov    %al,-0x9(%ebp)
-cmpb   $0x0,-0x9(%ebp)
-je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x32a>
-movb   $0x1,-0x27(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,-0x26(%ebp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,-0x25(%ebp)
-mov    0x8(%ebp),%eax
-lea    0xc(%eax),%edx
-lea    -0x27(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EE9push_backERKS0_>
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-test   %eax,%eax
-setne  %al
-mov    %al,-0x9(%ebp)
-cmpb   $0x0,-0x9(%ebp)
-je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x32d>
-movb   $0x2,-0x27(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,-0x26(%ebp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,-0x25(%ebp)
-mov    0x8(%ebp),%eax
-lea    0xc(%eax),%edx
-lea    -0x27(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EE9push_backERKS0_>
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-test   %eax,%eax
-setne  %al
-mov    %al,-0x9(%ebp)
-cmpb   $0x0,-0x9(%ebp)
-je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x330>
-movb   $0x3,-0x27(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,-0x26(%ebp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,-0x25(%ebp)
-mov    0x8(%ebp),%eax
-lea    0xc(%eax),%edx
-lea    -0x27(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EE9push_backERKS0_>
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-test   %eax,%eax
-setne  %al
-mov    %al,-0x9(%ebp)
-cmpb   $0x0,-0x9(%ebp)
-je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x333>
-movb   $0x4,-0x27(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,-0x26(%ebp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,-0x25(%ebp)
-mov    0x8(%ebp),%eax
-lea    0xc(%eax),%edx
-lea    -0x27(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EE9push_backERKS0_>
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-test   %eax,%eax
-setne  %al
-mov    %al,-0x9(%ebp)
-cmpb   $0x0,-0x9(%ebp)
-je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x336>
-movb   $0x5,-0x27(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,-0x26(%ebp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,-0x25(%ebp)
-mov    0x8(%ebp),%eax
-lea    0xc(%eax),%edx
-lea    -0x27(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EE9push_backERKS0_>
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-test   %eax,%eax
-setne  %al
-mov    %al,-0x9(%ebp)
-cmpb   $0x0,-0x9(%ebp)
-je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x339>
-movb   $0x6,-0x27(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,-0x26(%ebp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,-0x25(%ebp)
-mov    0x8(%ebp),%eax
-lea    0xc(%eax),%edx
-lea    -0x27(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EE9push_backERKS0_>
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
+mov    0x8(%ebp),%eax
+lea    0xc(%eax),%edx
+lea    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EE9push_backERKS0_>
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+test   %eax,%eax
+je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2e9>
+movb   $0x4,-0x2b(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,-0x2a(%ebp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,-0x29(%ebp)
+mov    0x8(%ebp),%eax
+lea    0xc(%eax),%edx
+lea    -0x2b(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EE9push_backERKS0_>
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+test   %eax,%eax
+je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2ec>
+movb   $0x5,-0x2e(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,-0x2d(%ebp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
+lea    0xc(%eax),%edx
+lea    -0x2e(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EE9push_backERKS0_>
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+test   %eax,%eax
+je     <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2ef>
+movb   $0x6,-0x31(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,-0x30(%ebp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,-0x2f(%ebp)
+mov    0x8(%ebp),%eax
+lea    0xc(%eax),%edx
+lea    -0x31(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNSt6vectorI22STPowerWarScheduleTimeSaIS0_EE9push_backERKS0_>
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
 mov    $0x0,%eax
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x346>
-nop
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-nop
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-nop
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-nop
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-nop
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
-nop
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x33a>
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2fc>
+nop
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+nop
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+nop
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+nop
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+nop
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
+nop
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2f0>
 nop
 mov    $0x1,%eax
-jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x346>
+jmp    <T> <_ZN15CPowerWarConfig11Parse_TableEPci+0x2fc>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarConfig::Parse_Table(char*, int) */

undefined4 __thiscall
CPowerWarConfig::_ZN15CPowerWarConfig11Parse_TableEPci
          (CPowerWarConfig *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  STPowerWarScheduleTime local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  int local_14;
  undefined1 local_d;
  
  if (*param_1 == '#') {
    uVar1 = 0;
  }
  else {
    local_14 = DNFFLib::ExplodeString(param_1," \t\r\n\"",&local_28,4);
    if ((local_14 == 4) || (local_14 == 2)) {
      local_d = 0;
      switch(param_2) {
      case 0:
        iVar2 = atoi(local_24);
        this[4] = SUB41(iVar2,0);
        break;
      case 1:
        iVar2 = atoi(local_24);
        this[5] = SUB41(iVar2,0);
        break;
      case 2:
        iVar2 = atoi(local_24);
        this[6] = SUB41(iVar2,0);
        break;
      case 3:
        iVar2 = atoi(local_24);
        *(int *)(this + 8) = iVar2;
        break;
      case 4:
        iVar2 = atoi(local_24);
        local_d = iVar2 != 0;
        if ((bool)local_d) {
          local_2b = (STPowerWarScheduleTime)0x0;
          iVar2 = atoi(local_20);
          local_2a = (undefined1)iVar2;
          iVar2 = atoi(local_1c);
          local_29 = (undefined1)iVar2;
          std::vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>>::push_back
                    ((vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>> *)
                     (this + 0xc),&local_2b);
        }
        break;
      case 5:
        iVar2 = atoi(local_24);
        local_d = iVar2 != 0;
        if ((bool)local_d) {
          local_2b = (STPowerWarScheduleTime)0x1;
          iVar2 = atoi(local_20);
          local_2a = (undefined1)iVar2;
          iVar2 = atoi(local_1c);
          local_29 = (undefined1)iVar2;
          std::vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>>::push_back
                    ((vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>> *)
                     (this + 0xc),&local_2b);
        }
        break;
      case 6:
        iVar2 = atoi(local_24);
        local_d = iVar2 != 0;
        if ((bool)local_d) {
          local_2b = (STPowerWarScheduleTime)0x2;
          iVar2 = atoi(local_20);
          local_2a = (undefined1)iVar2;
          iVar2 = atoi(local_1c);
          local_29 = (undefined1)iVar2;
          std::vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>>::push_back
                    ((vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>> *)
                     (this + 0xc),&local_2b);
        }
        break;
      case 7:
        iVar2 = atoi(local_24);
        local_d = iVar2 != 0;
        if ((bool)local_d) {
          local_2b = (STPowerWarScheduleTime)0x3;
          iVar2 = atoi(local_20);
          local_2a = (undefined1)iVar2;
          iVar2 = atoi(local_1c);
          local_29 = (undefined1)iVar2;
          std::vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>>::push_back
                    ((vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>> *)
                     (this + 0xc),&local_2b);
        }
        break;
      case 8:
        iVar2 = atoi(local_24);
        local_d = iVar2 != 0;
        if ((bool)local_d) {
          local_2b = (STPowerWarScheduleTime)0x4;
          iVar2 = atoi(local_20);
          local_2a = (undefined1)iVar2;
          iVar2 = atoi(local_1c);
          local_29 = (undefined1)iVar2;
          std::vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>>::push_back
                    ((vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>> *)
                     (this + 0xc),&local_2b);
        }
        break;
      case 9:
        iVar2 = atoi(local_24);
        local_d = iVar2 != 0;
        if ((bool)local_d) {
          local_2b = (STPowerWarScheduleTime)0x5;
          iVar2 = atoi(local_20);
          local_2a = (undefined1)iVar2;
          iVar2 = atoi(local_1c);
          local_29 = (undefined1)iVar2;
          std::vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>>::push_back
                    ((vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>> *)
                     (this + 0xc),&local_2b);
        }
        break;
      case 10:
        iVar2 = atoi(local_24);
        local_d = iVar2 != 0;
        if ((bool)local_d) {
          local_2b = (STPowerWarScheduleTime)0x6;
          iVar2 = atoi(local_20);
          local_2a = (undefined1)iVar2;
          iVar2 = atoi(local_1c);
          local_29 = (undefined1)iVar2;
          std::vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>>::push_back
                    ((vector<STPowerWarScheduleTime,std::allocator<STPowerWarScheduleTime>> *)
                     (this + 0xc),&local_2b);
        }
        break;
      default:
        return 0;
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPowerWarConfig.cpp](source/DNFServer/GameServer/Guild/DNFPowerWarConfig.cpp)（约第 95 行）：

```cpp
int CPowerWarConfig::Parse_Table(char* line, int idx)
{
    if (*line == '#')
    {
        return 0;
    }
    char* tokens[4];
    int n = DNFFLib::ExplodeString(line, " \t\r\n\"", tokens, 4);
    if (n == 4 || n == 2)
    {
        switch (idx)
        {
        case 0:
            m_info.m_day = (unsigned char)atoi(tokens[1]);
            break;
        case 1:
            m_info.m_hour = (unsigned char)atoi(tokens[1]);
            break;
        case 2:
            m_info.m_min = (unsigned char)atoi(tokens[1]);
            break;
        case 3:
            m_info.m_field4 = atoi(tokens[1]);
            break;
        case 4:
            if (atoi(tokens[1]) != 0)
            {
                STPowerWarScheduleTime st;
                st.m_data[0] = 0;
                st.m_data[1] = (char)atoi(tokens[2]);
                st.m_data[2] = (char)atoi(tokens[3]);
                m_info.m_schedule.push_back(st);
            }
            break;
        case 5:
            if (atoi(tokens[1]) != 0)
            {
                STPowerWarScheduleTime st;
                st.m_data[0] = 1;
                st.m_data[1] = (char)atoi(tokens[2]);
                st.m_data[2] = (char)atoi(tokens[3]);
                m_info.m_schedule.push_back(st);
            }
            break;
        case 6:
            if (atoi(tokens[1]) != 0)
            {
                STPowerWarScheduleTime st;
                st.m_data[0] = 2;
                st.m_data[1] = (char)atoi(tokens[2]);
                st.m_data[2] = (char)atoi(tokens[3]);
                m_info.m_schedule.push_back(st);
            }
            break;
        case 7:
            if (atoi(tokens[1]) != 0)
            {
                STPowerWarScheduleTime st;
                st.m_data[0] = 3;
                st.m_data[1] = (char)atoi(tokens[2]);
                st.m_data[2] = (char)atoi(tokens[3]);
                m_info.m_schedule.push_back(st);
            }
            break;
        case 8:
            if (atoi(tokens[1]) != 0)
            {
                STPowerWarScheduleTime st;
                st.m_data[0] = 4;
                st.m_data[1] = (char)atoi(tokens[2]);
                st.m_data[2] = (char)atoi(tokens[3]);
                m_info.m_schedule.push_back(st);
            }
            break;
        case 9:
            if (atoi(tokens[1]) != 0)
            {
                STPowerWarScheduleTime st;
                st.m_data[0] = 5;
                st.m_data[1] = (char)atoi(tokens[2]);
                st.m_data[2] = (char)atoi(tokens[3]);
                m_info.m_schedule.push_back(st);
            }
            break;
        case 10:
            if (atoi(tokens[1]) != 0)
            {
                STPowerWarScheduleTime st;
                st.m_data[0] = 6;
                st.m_data[1] = (char)atoi(tokens[2]);
                st.m_data[2] = (char)atoi(tokens[3]);
                m_info.m_schedule.push_back(st);
            }
            break;
        default:
            return 0;
        }
        return 1;
    }
    return 0;
}
```
