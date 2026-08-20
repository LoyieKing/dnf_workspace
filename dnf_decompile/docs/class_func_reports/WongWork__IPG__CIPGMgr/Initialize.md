# Initialize

`_ZN8WongWork3IPG7CIPGMgr10InitializeEjj`

`WongWork::IPG::CIPGMgr::Initialize(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGMgr` | `0x08104494` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08104494  _ZN8WongWork3IPG7CIPGMgr10InitializeEjj
#           WongWork::IPG::CIPGMgr::Initialize(unsigned int, unsigned int)
# range [0x08104494, 0x081045ff]
08104494 +0x000:  push   %ebp
08104495 +0x001:  mov    %esp,%ebp
08104497 +0x003:  push   %edi
08104498 +0x004:  push   %esi
08104499 +0x005:  push   %ebx
0810449a +0x006:  sub    $0x4c,%esp
0810449d +0x009:  mov    0x8(%ebp),%eax
081044a0 +0x00c:  mov    (%eax),%eax
081044a2 +0x00e:  test   %eax,%eax
081044a4 +0x010:  je     081044b0 <+0x1c>
081044a6 +0x012:  mov    $0xffffffff,%eax
081044ab +0x017:  jmp    081045f7 <+0x163>
081044b0 +0x01c:  cmpl   $0x0,0xc(%ebp)
081044b4 +0x020:  je     08104596 <+0x102>
081044ba +0x026:  mov    0xc(%ebp),%ebx
081044bd +0x029:  lea    0x0(,%ebx,4),%eax
081044c4 +0x030:  add    $0x1,%eax
081044c7 +0x033:  shl    $0x2,%eax
081044ca +0x036:  mov    %eax,(%esp)
081044cd +0x039:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
081044d2 +0x03e:  mov    %eax,%esi
081044d4 +0x040:  mov    %esi,%eax
081044d6 +0x042:  mov    %ebx,(%eax)
081044d8 +0x044:  mov    %esi,%eax
081044da +0x046:  lea    0x4(%eax),%edi
081044dd +0x049:  mov    %edi,-0x38(%ebp)
081044e0 +0x04c:  lea    -0x1(%ebx),%eax
081044e3 +0x04f:  mov    %eax,-0x34(%ebp)
081044e6 +0x052:  jmp    081044fb <+0x67>
081044e8 +0x054:  mov    -0x38(%ebp),%eax
081044eb +0x057:  mov    %eax,(%esp)
081044ee +0x05a:  call   081053e2 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x61>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x61
081044f3 +0x05f:  addl   $0x10,-0x38(%ebp)
081044f7 +0x063:  subl   $0x1,-0x34(%ebp)
081044fb +0x067:  cmpl   $0xffffffff,-0x34(%ebp)
081044ff +0x06b:  setne  %al
08104502 +0x06e:  test   %al,%al
08104504 +0x070:  jne    081044e8 <+0x54>
08104506 +0x072:  jmp    08104551 <+0xbd>
08104508 +0x074:  mov    %edx,-0x2c(%ebp)
0810450b +0x077:  mov    %eax,-0x30(%ebp)
0810450e +0x07a:  test   %edi,%edi
08104510 +0x07c:  je     08104533 <+0x9f>
08104512 +0x07e:  lea    -0x1(%ebx),%eax
08104515 +0x081:  sub    -0x34(%ebp),%eax
08104518 +0x084:  shl    $0x4,%eax
0810451b +0x087:  lea    (%edi,%eax,1),%ebx
0810451e +0x08a:  cmp    %edi,%ebx
08104520 +0x08c:  je     08104533 <+0x9f>
08104522 +0x08e:  sub    $0x10,%ebx
08104525 +0x091:  mov    (%ebx),%eax
08104527 +0x093:  add    $0x4,%eax
0810452a +0x096:  mov    (%eax),%eax
0810452c +0x098:  mov    %ebx,(%esp)
0810452f +0x09b:  call   *%eax
08104531 +0x09d:  jmp    0810451e <+0x8a>
08104533 +0x09f:  mov    -0x30(%ebp),%eax
08104536 +0x0a2:  mov    -0x2c(%ebp),%edx
08104539 +0x0a5:  mov    %edx,%ebx
0810453b +0x0a7:  mov    %eax,%edi
0810453d +0x0a9:  mov    %esi,(%esp)
08104540 +0x0ac:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08104545 +0x0b1:  mov    %edi,%eax
08104547 +0x0b3:  mov    %ebx,%edx
08104549 +0x0b5:  mov    %eax,(%esp)
0810454c +0x0b8:  call   08ae3750 <_Unwind_Resume>
08104551 +0x0bd:  mov    %esi,%eax
08104553 +0x0bf:  lea    0x4(%eax),%edx
08104556 +0x0c2:  mov    0x8(%ebp),%eax
08104559 +0x0c5:  mov    %edx,(%eax)
0810455b +0x0c7:  movl   $0x0,-0x1c(%ebp)
08104562 +0x0ce:  jmp    08104589 <+0xf5>
08104564 +0x0d0:  mov    0x8(%ebp),%eax
08104567 +0x0d3:  mov    (%eax),%eax
08104569 +0x0d5:  mov    0x8(%ebp),%edx
0810456c +0x0d8:  mov    %edx,0x4(%esp)
08104570 +0x0dc:  mov    %eax,(%esp)
08104573 +0x0df:  call   081053d4 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x53>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x53
08104578 +0x0e4:  mov    0x8(%ebp),%eax
0810457b +0x0e7:  mov    (%eax),%eax
0810457d +0x0e9:  mov    %eax,(%esp)
08104580 +0x0ec:  call   08630b8a <_ZN15ThreadInterface5beginEv>  ; ThreadInterface::begin()
08104585 +0x0f1:  addl   $0x1,-0x1c(%ebp)
08104589 +0x0f5:  mov    -0x1c(%ebp),%eax
0810458c +0x0f8:  cmp    0xc(%ebp),%eax
0810458f +0x0fb:  setb   %al
08104592 +0x0fe:  test   %al,%al
08104594 +0x100:  jne    08104564 <+0xd0>
08104596 +0x102:  mov    0x8(%ebp),%eax
08104599 +0x105:  mov    0x10(%ebp),%edx
0810459c +0x108:  mov    %edx,0x8(%eax)
0810459f +0x10b:  mov    0x8(%ebp),%eax
081045a2 +0x10e:  mov    0xc(%ebp),%edx
081045a5 +0x111:  mov    %edx,0x4(%eax)
081045a8 +0x114:  mov    0x8(%ebp),%eax
081045ab +0x117:  add    $0xec,%eax
081045b0 +0x11c:  mov    %eax,(%esp)
081045b3 +0x11f:  call   0814657c <_Z15InitBillingCashRPN6Taiwan10TaiwanCashE>  ; InitBillingCash(Taiwan::TaiwanCash*&)
081045b8 +0x124:  xor    $0x1,%eax
081045bb +0x127:  test   %al,%al
081045bd +0x129:  je     081045f2 <+0x15e>
081045bf +0x12b:  movl   $"Global billing cash initialize failed.",0x10(%esp)
081045c7 +0x133:  movl   $0x98,0xc(%esp)
081045cf +0x13b:  movl   $&_ZZN8WongWork3IPG7CIPGMgr10InitializeEjjE19__PRETTY_FUNCTION__,0x8(%esp)
081045d7 +0x143:  movl   $"IPGMgr.cpp",0x4(%esp)
081045df +0x14b:  movl   $0x1,(%esp)
081045e6 +0x152:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081045eb +0x157:  mov    $0xffffffff,%eax
081045f0 +0x15c:  jmp    081045f7 <+0x163>
081045f2 +0x15e:  mov    $0x0,%eax
081045f7 +0x163:  add    $0x4c,%esp
081045fa +0x166:  pop    %ebx
081045fb +0x167:  pop    %esi
081045fc +0x168:  pop    %edi
081045fd +0x169:  pop    %ebp
081045fe +0x16a:  ret
081045ff +0x16b:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGMgr::Initialize @ 0x8104494

/* WongWork::IPG::CIPGMgr::Initialize(unsigned int, unsigned int) */

undefined4 __thiscall WongWork::IPG::CIPGMgr::Initialize(CIPGMgr *this,uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint *puVar3;
  CIPGWorker *local_3c;
  uint local_38;
  uint local_20;
  
  if (*(int *)this == 0) {
    if (param_1 != 0) {
      puVar3 = operator_new__((param_1 * 4 + 1) * 4);
      *puVar3 = param_1;
      local_3c = (CIPGWorker *)(puVar3 + 1);
      local_38 = param_1;
      while (local_38 = local_38 - 1, local_38 != 0xffffffff) {
                    /* try { // try from 081044ee to 081044f2 has its CatchHandler @ 08104508 */
        CIPGWorker::CIPGWorker(local_3c);
        local_3c = local_3c + 0x10;
      }
      *(uint **)this = puVar3 + 1;
      for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
        CIPGWorker::SetIPGMgr(*(CIPGWorker **)this,this);
        ThreadInterface::begin(*(ThreadInterface **)this);
      }
    }
    *(uint *)(this + 8) = param_2;
    *(uint *)(this + 4) = param_1;
    cVar1 = InitBillingCash((TaiwanCash **)(this + 0xec));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      LogManager::logFormat
                (1,"IPGMgr.cpp","int WongWork::IPG::CIPGMgr::Initialize(unsigned int, unsigned int)"
                 ,0x98,"Global billing cash initialize failed.");
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
