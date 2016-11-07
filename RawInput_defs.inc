{$IFDEF FPC}
  {$MODE Delphi}
  // Activate symbol BARE_FPC if you want to compile this library outside of Lazarus.
  {.$DEFINE BARE_FPC}
{$ENDIF}

{$IF defined(CPU64) or defined(CPU64BITS)}
  {$DEFINE 64bit}
{$ELSEIF defined(CPU16)}
  {$MESSAGE FATAL 'Unsupported CPU.'}
{$ELSE}
  {$DEFINE 32bit}
{$IFEND}
