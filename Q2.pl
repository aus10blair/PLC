$name = "Austin";

sub printName {
  print "Name: $name \n";
}
sub StaticScoping{
  my $name = "Big Pimpin";
  printName();
}
sub dynamicScoping{
  local $name = "Big Pimpin";
  printName();
}
#call subroutines
print "Call staticScoping() \n";
staticScoping();
print "Call dynamicScoping() \n"
dynamicScoping();
