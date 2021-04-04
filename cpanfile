on configure => sub {
    requires 'ExtUtils::MakeMaker';
    requires 'perl', '5.008009';
};

on test => sub {
    requires 'Test::More';
    requires 'URI::Escape';
    requires 'URI::Escape::XS';
};
