# SendShutdownSignal

`_ZN15CShutdowManager18SendShutdownSignalEv`

`CShutdowManager::SendShutdownSignal()`

| 类 | 地址 |
|---|---|
| `CShutdowManager` | `0x082a35a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a35a6  _ZN15CShutdowManager18SendShutdownSignalEv
#           CShutdowManager::SendShutdownSignal()
# range [0x082a35a6, 0x082a36bb]
082a35a6 +0x000:  push   %ebp
082a35a7 +0x001:  mov    %esp,%ebp
082a35a9 +0x003:  sub    $0x48,%esp
082a35ac +0x006:  movl   $0x1e,0x8(%esp)
082a35b4 +0x00e:  movl   $0x0,0x4(%esp)
082a35bc +0x016:  lea    -0x32(%ebp),%eax
082a35bf +0x019:  mov    %eax,(%esp)
082a35c2 +0x01c:  call   0807dcc0 <_init+0x5b8>
082a35c7 +0x021:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
082a35cc +0x026:  mov    %eax,(%esp)
082a35cf +0x029:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
082a35d4 +0x02e:  mov    %eax,0x8(%esp)
082a35d8 +0x032:  movl   $"pid/%s.pid",0x4(%esp)
082a35e0 +0x03a:  lea    -0x32(%ebp),%eax
082a35e3 +0x03d:  mov    %eax,(%esp)
082a35e6 +0x040:  call   0807e440 <_init+0xd38>
082a35eb +0x045:  movl   $"r",0x4(%esp)
082a35f3 +0x04d:  lea    -0x32(%ebp),%eax
082a35f6 +0x050:  mov    %eax,(%esp)
082a35f9 +0x053:  call   0807e770 <_init+0x1068>
082a35fe +0x058:  mov    %eax,-0xc(%ebp)
082a3601 +0x05b:  cmpl   $0x0,-0xc(%ebp)
082a3605 +0x05f:  jne    082a361f <+0x79>
082a3607 +0x061:  lea    -0x32(%ebp),%eax
082a360a +0x064:  mov    %eax,0x4(%esp)
082a360e +0x068:  movl   $"%s process id file open 실패\n",(%esp)
082a3615 +0x06f:  call   0807db60 <_init+0x458>
082a361a +0x074:  jmp    082a36ba <+0x114>
082a361f +0x079:  lea    -0x14(%ebp),%eax
082a3622 +0x07c:  mov    %eax,0x8(%esp)
082a3626 +0x080:  movl   $"%d",0x4(%esp)
082a362e +0x088:  mov    -0xc(%ebp),%eax
082a3631 +0x08b:  mov    %eax,(%esp)
082a3634 +0x08e:  call   0807e8f0 <_init+0x11e8>
082a3639 +0x093:  mov    -0x14(%ebp),%eax
082a363c +0x096:  test   %eax,%eax
082a363e +0x098:  jg     082a3660 <+0xba>
082a3640 +0x09a:  mov    -0xc(%ebp),%eax
082a3643 +0x09d:  mov    %eax,(%esp)
082a3646 +0x0a0:  call   0807dea0 <_init+0x798>
082a364b +0x0a5:  mov    -0x14(%ebp),%eax
082a364e +0x0a8:  mov    %eax,0x4(%esp)
082a3652 +0x0ac:  movl   $"%d번의 잘못된 process id\n",(%esp)
082a3659 +0x0b3:  call   0807db60 <_init+0x458>
082a365e +0x0b8:  jmp    082a36ba <+0x114>
082a3660 +0x0ba:  mov    -0x14(%ebp),%eax
082a3663 +0x0bd:  movl   $0xc,0x4(%esp)
082a366b +0x0c5:  mov    %eax,(%esp)
082a366e +0x0c8:  call   0807e380 <_init+0xc78>
082a3673 +0x0cd:  mov    %eax,-0x10(%ebp)
082a3676 +0x0d0:  cmpl   $0x0,-0x10(%ebp)
082a367a +0x0d4:  jns    082a369c <+0xf6>
082a367c +0x0d6:  mov    -0xc(%ebp),%eax
082a367f +0x0d9:  mov    %eax,(%esp)
082a3682 +0x0dc:  call   0807dea0 <_init+0x798>
082a3687 +0x0e1:  mov    -0x14(%ebp),%eax
082a368a +0x0e4:  mov    %eax,0x4(%esp)
082a368e +0x0e8:  movl   $"%d번 process로 종료 signal 송신 실패",(%esp)
082a3695 +0x0ef:  call   0807db60 <_init+0x458>
082a369a +0x0f4:  jmp    082a36ba <+0x114>
082a369c +0x0f6:  mov    -0x14(%ebp),%eax
082a369f +0x0f9:  mov    %eax,0x4(%esp)
082a36a3 +0x0fd:  movl   $"SEND SHUTDOWN SIGNAL TO %d\n",(%esp)
082a36aa +0x104:  call   0807db60 <_init+0x458>
082a36af +0x109:  mov    -0xc(%ebp),%eax
082a36b2 +0x10c:  mov    %eax,(%esp)
082a36b5 +0x10f:  call   0807dea0 <_init+0x798>
082a36ba +0x114:  leave
082a36bb +0x115:  ret
```

## 反编译 C

```c
// CShutdowManager::SendShutdownSignal @ 0x82a35a6

/* CShutdowManager::SendShutdownSignal() */

void CShutdowManager::SendShutdownSignal(void)

{
  CEnvironment *this;
  undefined4 uVar1;
  char local_36 [30];
  int local_18;
  int local_14;
  FILE *local_10;
  
  memset(local_36,0,0x1e);
  this = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_file_name(this);
  sprintf(local_36,"pid/%s.pid",uVar1);
  local_10 = fopen(local_36,"r");
  if (local_10 == (FILE *)0x0) {
    printf(&DAT_08c18184,local_36);
  }
  else {
    fscanf(local_10,"%d",&local_18);
    if (local_18 < 1) {
      fclose(local_10);
      printf(&DAT_08c181a2,local_18);
    }
    else {
      local_14 = kill(local_18,0xc);
      if (local_14 < 0) {
        fclose(local_10);
        printf(&DAT_08c181bc,local_18);
      }
      else {
        printf("SEND SHUTDOWN SIGNAL TO %d\n",local_18);
        fclose(local_10);
      }
    }
  }
  return;
}
```
