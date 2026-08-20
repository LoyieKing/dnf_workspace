# parsing

`_ZN17Arad_Mileage_Data7parsingEPc`

`Arad_Mileage_Data::parsing(char*)`

| 类 | 地址 |
|---|---|
| `Arad_Mileage_Data` | `0x081a3416` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a3416  _ZN17Arad_Mileage_Data7parsingEPc
#           Arad_Mileage_Data::parsing(char*)
# range [0x081a3416, 0x081a3667]
081a3416 +0x000:  push   %ebp
081a3417 +0x001:  mov    %esp,%ebp
081a3419 +0x003:  push   %esi
081a341a +0x004:  push   %ebx
081a341b +0x005:  sub    $0x90,%esp
081a3421 +0x00b:  lea    -0x74(%ebp),%eax
081a3424 +0x00e:  mov    %eax,(%esp)
081a3427 +0x011:  call   0817b474 <_ZN11Arad_ScriptC1Ev>  ; Arad_Script::Arad_Script()
081a342c +0x016:  movl   $"default",0x8(%esp)
081a3434 +0x01e:  mov    0xc(%ebp),%eax
081a3437 +0x021:  mov    %eax,0x4(%esp)
081a343b +0x025:  lea    -0x74(%ebp),%eax
081a343e +0x028:  mov    %eax,(%esp)
081a3441 +0x02b:  call   0817b950 <_ZN11Arad_Script4LoadEPKcS1_>  ; Arad_Script::Load(char const*, char const*)
081a3446 +0x030:  xor    $0x1,%eax
081a3449 +0x033:  test   %al,%al
081a344b +0x035:  je     081a3457 <+0x41>
081a344d +0x037:  mov    $0x18c,%ebx
081a3452 +0x03c:  jmp    081a3651 <+0x23b>
081a3457 +0x041:  lea    -0x74(%ebp),%eax
081a345a +0x044:  mov    %eax,(%esp)
081a345d +0x047:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a3462 +0x04c:  test   %eax,%eax
081a3464 +0x04e:  sete   %al
081a3467 +0x051:  test   %al,%al
081a3469 +0x053:  je     081a3475 <+0x5f>
081a346b +0x055:  mov    $0x18f,%ebx
081a3470 +0x05a:  jmp    081a3651 <+0x23b>
081a3475 +0x05f:  mov    0x8(%ebp),%eax
081a3478 +0x062:  movl   $0x0,0x4(%eax)
081a347f +0x069:  movl   $"percent",0x8(%esp)
081a3487 +0x071:  movl   $0x0,0x4(%esp)
081a348f +0x079:  lea    -0x74(%ebp),%eax
081a3492 +0x07c:  mov    %eax,(%esp)
081a3495 +0x07f:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a349a +0x084:  mov    0x8(%ebp),%edx
081a349d +0x087:  mov    %eax,0x4(%edx)
081a34a0 +0x08a:  mov    0x8(%ebp),%eax
081a34a3 +0x08d:  mov    0x4(%eax),%eax
081a34a6 +0x090:  test   %eax,%eax
081a34a8 +0x092:  js     081a34b7 <+0xa1>
081a34aa +0x094:  mov    0x8(%ebp),%eax
081a34ad +0x097:  mov    0x4(%eax),%eax
081a34b0 +0x09a:  cmp    $0x3e8,%eax
081a34b5 +0x09f:  jle    081a34f7 <+0xe1>
081a34b7 +0x0a1:  mov    0x8(%ebp),%eax
081a34ba +0x0a4:  mov    0x4(%eax),%eax
081a34bd +0x0a7:  mov    %eax,0x14(%esp)
081a34c1 +0x0ab:  movl   $"[ERROR] invalid mileage default value. (%f)",0x10(%esp)
081a34c9 +0x0b3:  movl   $0x197,0xc(%esp)
081a34d1 +0x0bb:  movl   $&_ZZN17Arad_Mileage_Data7parsingEPcE19__PRETTY_FUNCTION__,0x8(%esp)
081a34d9 +0x0c3:  movl   $"localjapan/Arad_Script_Loader.cpp",0x4(%esp)
081a34e1 +0x0cb:  movl   $0x1,(%esp)
081a34e8 +0x0d2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081a34ed +0x0d7:  mov    $0x198,%ebx
081a34f2 +0x0dc:  jmp    081a3651 <+0x23b>
081a34f7 +0x0e1:  movl   $"item",0x8(%esp)
081a34ff +0x0e9:  mov    0xc(%ebp),%eax
081a3502 +0x0ec:  mov    %eax,0x4(%esp)
081a3506 +0x0f0:  lea    -0x74(%ebp),%eax
081a3509 +0x0f3:  mov    %eax,(%esp)
081a350c +0x0f6:  call   0817b950 <_ZN11Arad_Script4LoadEPKcS1_>  ; Arad_Script::Load(char const*, char const*)
081a3511 +0x0fb:  xor    $0x1,%eax
081a3514 +0x0fe:  test   %al,%al
081a3516 +0x100:  je     081a3522 <+0x10c>
081a3518 +0x102:  mov    $0x19e,%ebx
081a351d +0x107:  jmp    081a3651 <+0x23b>
081a3522 +0x10c:  lea    -0x74(%ebp),%eax
081a3525 +0x10f:  mov    %eax,(%esp)
081a3528 +0x112:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a352d +0x117:  test   %eax,%eax
081a352f +0x119:  sete   %al
081a3532 +0x11c:  test   %al,%al
081a3534 +0x11e:  je     081a3540 <+0x12a>
081a3536 +0x120:  mov    $0x0,%ebx
081a353b +0x125:  jmp    081a3651 <+0x23b>
081a3540 +0x12a:  movl   $0x0,-0x18(%ebp)
081a3547 +0x131:  jmp    081a3616 <+0x200>
081a354c +0x136:  movl   $"ipg_no",0x8(%esp)
081a3554 +0x13e:  mov    -0x18(%ebp),%eax
081a3557 +0x141:  mov    %eax,0x4(%esp)
081a355b +0x145:  lea    -0x74(%ebp),%eax
081a355e +0x148:  mov    %eax,(%esp)
081a3561 +0x14b:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a3566 +0x150:  mov    %eax,-0x14(%ebp)
081a3569 +0x153:  movl   $"percent",0x8(%esp)
081a3571 +0x15b:  mov    -0x18(%ebp),%eax
081a3574 +0x15e:  mov    %eax,0x4(%esp)
081a3578 +0x162:  lea    -0x74(%ebp),%eax
081a357b +0x165:  mov    %eax,(%esp)
081a357e +0x168:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a3583 +0x16d:  mov    %eax,-0x10(%ebp)
081a3586 +0x170:  mov    -0x14(%ebp),%eax
081a3589 +0x173:  mov    %eax,0x4(%esp)
081a358d +0x177:  mov    0x8(%ebp),%eax
081a3590 +0x17a:  mov    %eax,(%esp)
081a3593 +0x17d:  call   081a3668 <_ZN17Arad_Mileage_Data4findEi>  ; Arad_Mileage_Data::find(int)
081a3598 +0x182:  mov    %eax,-0xc(%ebp)
081a359b +0x185:  cmpl   $0x0,-0xc(%ebp)
081a359f +0x189:  jns    081a35d1 <+0x1bb>
081a35a1 +0x18b:  mov    -0x10(%ebp),%eax
081a35a4 +0x18e:  mov    %eax,0x8(%esp)
081a35a8 +0x192:  mov    -0x14(%ebp),%eax
081a35ab +0x195:  mov    %eax,0x4(%esp)
081a35af +0x199:  lea    -0x20(%ebp),%eax
081a35b2 +0x19c:  mov    %eax,(%esp)
081a35b5 +0x19f:  call   081a41d2 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x22d>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x22d
081a35ba +0x1a4:  mov    0x8(%ebp),%eax
081a35bd +0x1a7:  lea    0x8(%eax),%edx
081a35c0 +0x1aa:  lea    -0x20(%ebp),%eax
081a35c3 +0x1ad:  mov    %eax,0x4(%esp)
081a35c7 +0x1b1:  mov    %edx,(%esp)
081a35ca +0x1b4:  call   081a492e <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x989>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x989
081a35cf +0x1b9:  jmp    081a3612 <+0x1fc>
081a35d1 +0x1bb:  mov    -0x10(%ebp),%eax
081a35d4 +0x1be:  mov    %eax,0x18(%esp)
081a35d8 +0x1c2:  mov    -0x14(%ebp),%eax
081a35db +0x1c5:  mov    %eax,0x14(%esp)
081a35df +0x1c9:  movl   $"[ERROR] already exist item index (IPG:%d, percent:%d)",0x10(%esp)
081a35e7 +0x1d1:  movl   $0x1b0,0xc(%esp)
081a35ef +0x1d9:  movl   $&_ZZN17Arad_Mileage_Data7parsingEPcE19__PRETTY_FUNCTION__,0x8(%esp)
081a35f7 +0x1e1:  movl   $"localjapan/Arad_Script_Loader.cpp",0x4(%esp)
081a35ff +0x1e9:  movl   $0x1,(%esp)
081a3606 +0x1f0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081a360b +0x1f5:  mov    $0x1b1,%ebx
081a3610 +0x1fa:  jmp    081a3651 <+0x23b>
081a3612 +0x1fc:  addl   $0x1,-0x18(%ebp)
081a3616 +0x200:  lea    -0x74(%ebp),%eax
081a3619 +0x203:  mov    %eax,(%esp)
081a361c +0x206:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a3621 +0x20b:  cmp    -0x18(%ebp),%eax
081a3624 +0x20e:  setg   %al
081a3627 +0x211:  test   %al,%al
081a3629 +0x213:  jne    081a354c <+0x136>
081a362f +0x219:  mov    $0x0,%ebx
081a3634 +0x21e:  jmp    081a3651 <+0x23b>
081a3636 +0x220:  mov    %edx,%ebx
081a3638 +0x222:  mov    %eax,%esi
081a363a +0x224:  lea    -0x74(%ebp),%eax
081a363d +0x227:  mov    %eax,(%esp)
081a3640 +0x22a:  call   0817b624 <_ZN11Arad_ScriptD1Ev>  ; Arad_Script::~Arad_Script()
081a3645 +0x22f:  mov    %esi,%eax
081a3647 +0x231:  mov    %ebx,%edx
081a3649 +0x233:  mov    %eax,(%esp)
081a364c +0x236:  call   08ae3750 <_Unwind_Resume>
081a3651 +0x23b:  lea    -0x74(%ebp),%eax
081a3654 +0x23e:  mov    %eax,(%esp)
081a3657 +0x241:  call   0817b624 <_ZN11Arad_ScriptD1Ev>  ; Arad_Script::~Arad_Script()
081a365c +0x246:  mov    %ebx,%eax
081a365e +0x248:  add    $0x90,%esp
081a3664 +0x24e:  pop    %ebx
081a3665 +0x24f:  pop    %esi
081a3666 +0x250:  pop    %ebp
081a3667 +0x251:  ret
```

## 反编译 C

```c
// Arad_Mileage_Data::parsing @ 0x81a3416

/* Arad_Mileage_Data::parsing(char*) */

undefined4 __thiscall Arad_Mileage_Data::parsing(Arad_Mileage_Data *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Arad_Script local_78 [84];
  Data local_24 [8];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  Arad_Script::Arad_Script(local_78);
                    /* try { // try from 081a3441 to 081a360a has its CatchHandler @ 081a3636 */
  cVar1 = Arad_Script::Load(local_78,param_1,"default");
  if (cVar1 == '\x01') {
    iVar2 = Arad_Script::GetRowNum(local_78);
    if (iVar2 == 0) {
      uVar3 = 399;
    }
    else {
      *(undefined4 *)(this + 4) = 0;
      uVar3 = Arad_Script::GetInt(local_78,0,"percent");
      *(undefined4 *)(this + 4) = uVar3;
      if ((*(int *)(this + 4) < 0) || (1000 < *(int *)(this + 4))) {
        LogManager::logFormat
                  (1,"localjapan/Arad_Script_Loader.cpp",
                   "virtual int Arad_Mileage_Data::parsing(char*)",0x197,
                   "[ERROR] invalid mileage default value. (%f)",*(undefined4 *)(this + 4));
        uVar3 = 0x198;
      }
      else {
        cVar1 = Arad_Script::Load(local_78,param_1,"item");
        if (cVar1 == '\x01') {
          iVar2 = Arad_Script::GetRowNum(local_78);
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            local_1c = 0;
            while( true ) {
              iVar2 = Arad_Script::GetRowNum(local_78);
              if (iVar2 <= local_1c) break;
              local_18 = Arad_Script::GetInt(local_78,local_1c,"ipg_no");
              local_14 = Arad_Script::GetInt(local_78,local_1c,"percent");
              local_10 = find(this,local_18);
              if (-1 < local_10) {
                LogManager::logFormat
                          (1,"localjapan/Arad_Script_Loader.cpp",
                           "virtual int Arad_Mileage_Data::parsing(char*)",0x1b0,
                           "[ERROR] already exist item index (IPG:%d, percent:%d)",local_18,local_14
                          );
                uVar3 = 0x1b1;
                goto LAB_081a3651;
              }
              Data::Data(local_24,local_18,local_14);
              std::vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>>::
              push_back((vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>> *)
                        (this + 8),local_24);
              local_1c = local_1c + 1;
            }
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0x19e;
        }
      }
    }
  }
  else {
    uVar3 = 0x18c;
  }
LAB_081a3651:
  Arad_Script::~Arad_Script(local_78);
  return uVar3;
}
```
